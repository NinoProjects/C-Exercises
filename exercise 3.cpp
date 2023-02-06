#include <iostream>

using namespace std;

int main()
{
    int i, n;
    int sum=0;
    
    cout << "შეიყვანე n რაოდენობის რიცხვი და გამოთვალე მათი ჯამი " <<endl;
    cout << "შეიყვანეთ ნატურალური რიცხვი 7-ის ჩათვლით: " ;
    cin >> n;

    
    for( i = 1; i <= n; i++){
        sum = sum+i;
        cout << i << endl;
    }
    
    cout << "რიცხვების ჯამი არის: " << sum;

    return 0;
}
