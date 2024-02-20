#include <iostream>

int main() {

    setlocale(LC_ALL, "RUS");

    int countOfMoney;

    std::cout << "Введите сколько денег вы хотели бы снять: "; std::cin >> countOfMoney;

    if (countOfMoney / 100 != 0 && countOfMoney > 150000) {
        std::cout << "Ошибка!";
    }
    if (countOfMoney % 5000 != 0 || countOfMoney % 2000 == 0) {
        int currentGive = countOfMoney / 5000;
        int currentGiveTwo = (countOfMoney % 5000) / 2000;
        int currentGiveThree = ((countOfMoney % 5000) % 2000) / 1000;
        int currentGiveFour = (((countOfMoney % 5000) % 2000) % 1000) / 500;
        int currentGiveFive = ((((countOfMoney % 5000) % 2000) % 1000) % 500) / 200;
        int currentGiveSix = (((((countOfMoney % 5000) % 2000) % 1000) % 500) % 200) / 100;
        std::cout << "Вы получите вашу сумму в столько купюр: \n" << currentGive << " в номинале 5000.\n" << currentGiveTwo << " в номинале 2000.\n" << currentGiveThree << " в номинале 1000.\n" << currentGiveFour << " в номинале 500.\n" << currentGiveFive << " в номинале 200.\n" << currentGiveSix << " В номинале 100.";
    }
}