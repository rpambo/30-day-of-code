
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, i, l;
    string name;
    
    cin >> n;
    if ((n >= 1) && (n <= 10))
    {
        i = 0;
        while (i < n)
        {
            cin >> name;
            if (name.length() >= 2 && name.length() <= 10000)
            {
                cout << name[0];
                l = 1;
                while (name[l])
                {
                    if (l % 2 == 0)
                    {
                        cout << name[l]; 
                    }
                    l++;
                }
                l = 1;
                cout << " ";
                while (name[l])
                {
                    if (l % 2 != 0)
                    {
                        cout << name[l];
                    }
                    l++;
                }
            }
            cout << endl;
            i++;
        }
    }
    return 0;
}

