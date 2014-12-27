#ifndef PLAYER_H_INC
#define PLAYER_H_INC

#include <iostream>
#include <functional>
#include <string>

using namespace std;

enum class CharacterClass { Cleric, Fighter, Rogue, Mage };

class Player{
	private:
		string name;
		float health;
		float mana;
		CharacterClass characterClass;
	public:
		Player(string name, CharacterClass characterClass);
		Player(string name, CharacterClass characterClass, float health, float mana);
		float ApplyDamage(float damage);
		void CastSpell(float mana, std::function<void(int)>& onCompleted);
		void PrintStats(ostream& o);

		//Setters
		void SetName(string name) { this->name = name; }
		
		//Getters
		string GetName() { return name; }
		CharacterClass GetCharacterClass() { return characterClass; }
		float GetHealth() { return health; }
		float GetMana() { return mana; }
};

#endif