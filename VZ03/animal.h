#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
using namespace std;

class Animal {
  public:
    /** @brief Constructor
      */
    Animal();
    /** @brief Destructor
      */
    virtual ~Animal();
    /** @brief Komunikasi dengan hewan
      */
    virtual void GetExperience();
    /** @brief Jumlah makanan
      * @return Jumlah makan
      */
    virtual int GetFoodNum();
    /** @brief Print karakter
      * @return char
    */
    char GetRender();
    /** @brief Set karakter hewan
      * @param cc Karakter hewan tsb
      */
    void SetEnemy(char cc);
    /** @brief Ambil list musuh
      * @return List Musuh
      */
    char* GetEnemy();
    /** @brief Ambil tipe habitat hewan
      * @return List habitat
      */
    int* GetType();
    /** @brief Ambil jumlah musuh
      * @return int musuh
      */
    int GetTopEnemy();
  protected:
    /** Type habitat hewan. 0 : darat, 1 : udara, 2 : air
      */
    int* type;
    /** Family hewan
      */
    string famili;
    /** Species hewan
      */
    string species;
    /** Experience hewan
      */
    string experience;
    /** Jenis Makanan hewan. 1 : herbifor, 2 : karnivor, 3 : omnifor
      */
    short jenis_makanan;
	  /**	Berat hewan
      */
    int berat;
    /** Char yang digunakan untuk render
      */
    char animal_char;
    /** Array of char yang berisi list musuhnya
      */
    char* enemy_char;
    /** Pointer EnemyChar yang available
      */
    int top_enemy;
};
#endif
