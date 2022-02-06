int size;
    cout<<"enter size for array:";
    cin>>size;
    SDA s(size);
    int t;
    while(1)
    {
        system("CLS");
        s.peek();
        menu();
        cin>>t;
        switch (t)
        {
        case 1:
            int data;
            cout<<"\n\t\tenter the data :";
            cin>>data; 
            s.push(data);       
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 4:
            cout<<"\n\t\t\t\tbye bye";
            goto end;
        default:
            cout<<"\nroung input ";
            break;
        }
        
    }
    end:
    