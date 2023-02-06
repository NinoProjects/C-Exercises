#include <iostream>

using namespace std;

int main()
{
    int i;
    int sum=0;
    
    cout << "იპოვე პირველი 10 ნატურალური რიცხვის ჯამი" <<endl;

    
    for( i = 1; i <= 10; i++){
        sum += i;
        cout << i << endl;
    }
    
    cout << "რიცხვების ჯამი არის: " << sum;

    return 0;
}
