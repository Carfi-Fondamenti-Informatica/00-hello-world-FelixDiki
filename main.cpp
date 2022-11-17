using namespace std;
bool opzione;
int main() {
   float a=0;
    float b = 0;
   std::cin >> a;
   std::cin >> b;
    std::cin >> opzione;
   switch (opzione)

    {
        case 0:
       std:: cout << (a*b)/2<<std::endl;
       break;
        case 1:
            std::cout << a*a <<std::endl;
            break;
        case 2:
            std::cout<< a*b;
            break;
            default:
            std::cout << "opzione non valido"<<std::endl; }
    }
