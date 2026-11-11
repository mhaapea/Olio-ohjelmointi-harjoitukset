#include "coffeemaker.h"

CoffeeMaker::CoffeeMaker(float vt, float pm) {
    v_tilavuus = vt;
    papu_max = pm;
}

void CoffeeMaker::start() {
    tila = true;
}

void CoffeeMaker::stop() {
    tila = false;
}

void CoffeeMaker::lisaaVetta(float vm) {
    if (v_tilavuus > v_maara + vm) {
    v_maara = v_maara + vm;
    } else {
        cout << "Vesi ei mahdu säiliöön" << endl;
    }
}

void CoffeeMaker::lisaaPapuja(float pm) {
    if (papu_max > papu_maara + pm) {
        papu_maara += pm;
    } else {
        std::cout << "Pavut ei mahdu" << std::endl;
    }
}

void CoffeeMaker::makeCoffee() {
    if (tila==true && v_maara > 2 && papu_maara > 1) {
        cout << "Kahvi valmistuu pian" << endl;
        valmistetut++;
        v_maara -= 2;
        papu_maara -= 1;
    } else {
        cout << "Tarkista että kone on päällä ja tarvikkeita tarpeeksi" << endl;
    }
}

void CoffeeMaker::showStatus() {
    cout << "Vettä: " << v_maara << endl;
    cout << "Papuja: " << papu_maara << endl;
    if(tila==false) {
        cout << "Kone on pois päältä" << endl;
    } else {
        cout << "Kone on päällä" << endl;
    }
}

void CoffeeMaker::showMade() {
    cout << "Valmistettuja kuppeja: " << valmistetut << endl;
}