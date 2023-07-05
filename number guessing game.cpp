#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(static_cast<unsigned>(time(0)));

    int secretNumber = rand() % 100; // 0-99 arası rastgele bir sayı üretiyoru
    int guess;
    int attempts = 0;

    std::cout << "0 ile 99 arasında bir sayıyı tahmin edin!" << std::endl;

    do
    {
        std::cout << "Tahmininizi girin: ";
        std::cin >> guess;

        attempts++;

        if (guess < secretNumber)
        {
            std::cout << "Daha yüksek bir sayı tahmin edin." << std::endl;
        }
        else if (guess > secretNumber)
        {
            std::cout << "Daha düşük bir sayı tahmin edin." << std::endl;
        }
        else
        {
            std::cout << "Tebrikler! Doğru tahmin ettiniz." << std::endl;
            std::cout << "Tahmininiz: " << guess << std::endl;
            std::cout << "Deneme sayısı: " << attempts << std::endl;
            break;
        }
    } while (true);

    return 0;
}