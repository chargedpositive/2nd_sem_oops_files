    #include <iostream>
    
    using namespace std;
    
    void prime(int a, int b)
    {
    	int i, c;
    	while (a < b)
        {
            c = 0;
            for(i = 2; i <= a/2; ++i)
            {
                if(a % i == 0)
                {
                   c = 1;
                    break;
                }
            }
            if (c == 0)
                cout << a << " ";
            ++a;
        }	
    }

    int main()
    {
        int a, b;
        cout << "Enter the lower interval : ";
        cin >> a;
        cout<<endl;
        cout<<"Enter the higher interval : ";
        cin >> b;
        cout<<endl;
        cout << "Prime numbers between " << a << " and " << b<< " are: ";
        prime(a,b);
        cout<<endl;
        return 0;
    }