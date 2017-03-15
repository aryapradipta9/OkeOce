#include <string>
#include <iostream>
#include "animal.h"
using namespace std;
/** @brief Constructor
  */
Animal::Animal() {
  type = new int[3];
  enemy_char = new char[5];
}
/** @brief Destructor
  */
Animal::~Animal() {
  delete [] type;
  delete [] enemy_char;
}
/** @brief Komunikasi dengan hewan
  */
void Animal::GetExperience() {
  cout << "Hewan ini tinggal di : ";
  if (type[0]==1) cout << "darat ";
  if (type[1]==1) cout << "udara ";
  if (type[2]==1) cout << "air ";
  cout << endl;
  cout << "Hewan ini tergabung di famili ";
  cout << famili;
  cout << "dan dengan nama spesies ";
  cout << species << endl;
  cout << experience << endl;
}

/** @brief Print karakter
  * @return char
  */
char Animal::GetRender() {
  return (animal_char);
}
/** @brief Set karakter hewan
  * @param cc Karakter hewan tsb
  */
void Animal::SetEnemy(char cc) {
  enemy_char[top_enemy] = cc;
  top_enemy++;
}
/** @brief Ambil list musuh
  * @return List Musuh
  */
char* Animal::GetEnemy() {
  return enemy_char;
}
/** @brief dapat jumlah musuh
  * @return jumlah musuh
  */
int Animal::GetTopEnemy() {
  return top_enemy;
}

/** @brief Ambil tipe habitat hewan
  * @return List habitat
  */
int* Animal::GetType() {
  return (type);
}
/** @brief Ambil species hewan
  * @return string species
  */
string Animal::GetSpecies() {
  return species;
}
/** @brief Ambil famili hewan
  * @return string famili
  */
string Animal::GetFamili() {
  return famili;
}
/** @brief Ambil experience hewan
  * @return string experience
  */
string Animal::GetIsiExperience() {
  return experience;
}
