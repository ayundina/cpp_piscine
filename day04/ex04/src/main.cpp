#include "../include/IMiningLaser.hpp"
#include "../include/IAsteroid.hpp"
#include "../include/DeepCoreMiner.hpp"
#include "../include/StripMiner.hpp"
#include "../include/AsteroKreog.hpp"
#include "../include/KoalaSteroid.hpp"
#include "../include/MiningBarge.hpp"

int main()
{
	MiningBarge barge;
	IMiningLaser *laser = new StripMiner();
	IAsteroid *asteroid = new AsteroKreog();
	IMiningLaser *core_laser = new DeepCoreMiner();
	IAsteroid *koala_steroid = new KoalaSteroid();

	// MiningBarge barge(core_laser); // test parametric constructor
	barge.equip(laser);

	std::cout << "test assignment operator:\n";
	MiningBarge barge_equal;
	barge_equal = barge;
	barge_equal.mine(asteroid);
	barge_equal.mine(koala_steroid);

	barge.equip(core_laser);
	barge.equip(laser);
	barge.equip(core_laser);

	std::cout << "test copy constructor:\n";
	MiningBarge barge_copy(barge); // test copy constructor
	barge_copy.mine(asteroid);
	barge_copy.mine(koala_steroid);

	std::cout << "normal:\n";
	barge.mine(asteroid);
	barge.mine(koala_steroid);

	delete laser;
	delete asteroid;
	delete core_laser;
	delete koala_steroid;
	return 0;
}