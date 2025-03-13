#include "visa.h"
#include "kysymysClass.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    visa visa;

    visa.lataaPeli();

    string vaihtoehdot1[4] = {"a. Elephant", "b. Giraffe", "c. Tiger", "d. Panda"};
    visa.lisaaKysymys(kysymys("What is the largest land mammal in the world?\n", vaihtoehdot1, 'a'));

    string vaihtoehdot2[4] = {"a. Lion", "b. Hippopotamus", "c. Tiger", "d. Cheetah"};
    visa.lisaaKysymys(kysymys("Which animal is known as the 'king of the savannah'?", vaihtoehdot2, 'a'));

    string vaihtoehdot3[4] = {"a. Seal", "b. Dolphin", "c. Penguin", "d. Sea lion"};
    visa.lisaaKysymys(kysymys("Which marine animal is known for performing tricks with humans?", vaihtoehdot3, 'b'));

    string vaihtoehdot4[4] = {"a. Bear", "b. Lynx", "c. Wolf", "d. Fox"};
    visa.lisaaKysymys(kysymys("Which animal is the national animal of Finland?", vaihtoehdot4, 'a'));

    string vaihtoehdot5[4] = {"a. Great white shark", "b. Octopus", "c. Turtle", "d. Jellyfish"};
    visa.lisaaKysymys(kysymys("Which animal is known as the world's most dangerous fish?", vaihtoehdot5, 'a'));

    string vaihtoehdot6[4] = {"a. Canary rooster", "b. Parrot", "c. Chinese dog", "d. Rooster"};
    visa.lisaaKysymys(kysymys("Which animal is known for its colorful feathers and ability to mimic sounds?", vaihtoehdot6, 'b'));

    string vaihtoehdot7[4] = {"a. Koala", "b. Kangaroo", "c. Wombat", "d. Tasmanian devil"};
    visa.lisaaKysymys(kysymys("Which animal is native to Australia and is known for hopping long distances?", vaihtoehdot7, 'b'));

    string vaihtoehdot8[4] = {"a. Dingo", "b. Wild boar", "c. Saimaa ringed seal", "d. Polar bear"};
    visa.lisaaKysymys(kysymys("Which animal is endangered and lives mainly in Lake Saimaa?", vaihtoehdot8, 'c'));

    string vaihtoehdot9[4] = {"a. Tiger", "b. Leopard", "c. Panther", "d. Turtle"};
    visa.lisaaKysymys(kysymys("Which animal is known for its beautiful and bright colored fur?", vaihtoehdot9, 'b'));

    string vaihtoehdot10[4] = {"a. Fox", "b. Panther", "c. Lynx", "d. Lion"};
    visa.lisaaKysymys(kysymys("Which animal is especially known for its agility and nocturnal life?", vaihtoehdot10, 'c'));

    string vaihtoehdot11[4] = {"a. Camel", "b. Horse", "c. Donkey", "d. Zebra"};
    visa.lisaaKysymys(kysymys("Which animal is known as the 'ship of the desert'?", vaihtoehdot11, 'a'));

    string vaihtoehdot12[4] = {"a. Octopus", "b. Crab", "c. Jellyfish", "d. Lobster"};
    visa.lisaaKysymys(kysymys("Which sea creature has eight arms?", vaihtoehdot12, 'a'));

    string vaihtoehdot13[4] = {"a. Bald eagle", "b. Falcon", "c. Hawk", "d. Owl"};
    visa.lisaaKysymys(kysymys("Which bird is a symbol of the United States?", vaihtoehdot13, 'a'));

    string vaihtoehdot14[4] = {"a. Penguin", "b. Ostrich", "c. Kiwi", "d. Peacock"};
    visa.lisaaKysymys(kysymys("Which bird is the largest and cannot fly?", vaihtoehdot14, 'b'));

    string vaihtoehdot15[4] = {"a. Rattlesnake", "b. Cobra", "c. Python", "d. Viper"};
    visa.lisaaKysymys(kysymys("Which snake is known for its warning rattle?", vaihtoehdot15, 'a'));

    string vaihtoehdot16[4] = {"a. Dog", "b. Cat", "c. Rabbit", "d. Guinea pig"};
    visa.lisaaKysymys(kysymys("Which pet animal purrs when happy?", vaihtoehdot16, 'b'));

    string vaihtoehdot17[4] = {"a. Bat", "b. Owl", "c. Kangaroo", "d. Sloth"};
    visa.lisaaKysymys(kysymys("Which mammal is capable of true flight?", vaihtoehdot17, 'a'));

    string vaihtoehdot18[4] = {"a. Cheetah", "b. Horse", "c. Gazelle", "d. Greyhound"};
    visa.lisaaKysymys(kysymys("Which is the fastest land animal?", vaihtoehdot18, 'a'));

    string vaihtoehdot19[4] = {"a. Whale", "b. Shark", "c. Dolphin", "d. Swordfish"};
    visa.lisaaKysymys(kysymys("Which marine animal is a mammal?", vaihtoehdot19, 'a'));

    string vaihtoehdot20[4] = {"a. T-Rex", "b. Velociraptor", "c. Brachiosaurus", "d. Triceratops"};
    visa.lisaaKysymys(kysymys("Which dinosaur was known as the 'king of the dinosaurs'?", vaihtoehdot20, 'a'));

    string vaihtoehdot21[4] = {"a. Snail", "b. Sloth", "c. Tortoise", "d. Starfish"};
    visa.lisaaKysymys(kysymys("Which animal is the slowest?", vaihtoehdot21, 'b'));

    string vaihtoehdot22[4] = {"a. Dolphin", "b. Orca", "c. Beluga whale", "d. Blue whale"};
    visa.lisaaKysymys(kysymys("Which is the largest animal in the world?", vaihtoehdot22, 'd'));

    string vaihtoehdot23[4] = {"a. Lobster", "b. Starfish", "c. Jellyfish", "d. Octopus"};
    visa.lisaaKysymys(kysymys("Which marine animal has no brain or heart?", vaihtoehdot23, 'c'));

    string vaihtoehdot24[4] = {"a. Rat", "b. Mouse", "c. Squirrel", "d. Hamster"};
    visa.lisaaKysymys(kysymys("Which rodent is often kept as a pet and loves to hoard food?", vaihtoehdot24, 'd'));

    string vaihtoehdot25[4] = {"a. Polar bear", "b. Grizzly bear", "c. Panda bear", "d. Sun bear"};
    visa.lisaaKysymys(kysymys("Which bear primarily eats bamboo?", vaihtoehdot25, 'c'));

    string vaihtoehdot26[4] = {"a. Owl", "b. Parrot", "c. Crow", "d. Pigeon"};
    visa.lisaaKysymys(kysymys("Which bird is considered one of the most intelligent?", vaihtoehdot26, 'c'));

    string vaihtoehdot27[4] = {"a. Wolf", "b. Fox", "c. Coyote", "d. Jackal"};
    visa.lisaaKysymys(kysymys("Which canine animal is known for its intelligence and pack hunting?", vaihtoehdot27, 'a'));

    string vaihtoehdot28[4] = {"a. Tuna", "b. Salmon", "c. Clownfish", "d. Shark"};
    visa.lisaaKysymys(kysymys("Which fish was made famous in the movie 'Finding Nemo'?", vaihtoehdot28, 'c'));

    string vaihtoehdot29[4] = {"a. Koala", "b. Sloth", "c. Panda", "d. Lemur"};
    visa.lisaaKysymys(kysymys("Which animal sleeps the most hours per day?", vaihtoehdot29, 'b'));

    string vaihtoehdot30[4] = {"a. Chimpanzee", "b. Gorilla", "c. Orangutan", "d. Baboon"};
    visa.lisaaKysymys(kysymys("Which primate is considered the most intelligent?", vaihtoehdot30, 'a'));

    visa.aloitaPeli();

    return 0;
}
