#include "ClassErrorAndExit.hpp"
#include "ClassInput.hpp"
#include "ClassValidParams.hpp"
#include "ClassOutput.hpp"

void findAndReplace(std::string &line, std::string find_str, std::string replace_str)
{
	size_t pos = line.find(find_str, 0);

	while (pos != std::string::npos)
	{
		line.replace(pos, find_str.length(), replace_str);
		pos = line.find(find_str, pos + replace_str.length());
	}
	return;
}

void readAndCopy(Input &input, Output &output, ValidParams params)
{
	bool ret = false;
	std::string line;

	while ((ret = input.getLine(line)))
	{
		findAndReplace(line, params.getFindString(), params.getReplaceString());
		output.write(line + "\n");
	}
	return;
}

int main(int argc, char **argv)
{
	ValidParams params(argc, argv);
	Input input(params.getInputFileName());
	Output output(params.getInputFileName());

	readAndCopy(input, output, params);
	return 0;
}
