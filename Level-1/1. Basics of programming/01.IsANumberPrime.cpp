M1)run loop from 1->n,(prime no. has only 2 factors one and itself check that)
void fun(int n){
    int count =0;
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            count++; 
        }
    }
    if(count == 2){
        cout<<"Prime";
    }
    else{
        cout<<"not prime";
    }  
}
#TLE above(because of test cases and no. of operations costs > 10*9,so can't run in 1 sec, so need to be optimised)

M2)run loop from 1->n,(optimised -> any no that should be divided, can be divided till it's root only otherwise it will not divide further), moreover why need to chk for all upto root{n}, just chk for 1 time divide
void fun(int n){
    int count =0;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            count++; 
            break;
        }
    }
    if(count == 0){
        cout<<"Prime";
    }
    else{
        cout<<"not prime";
    }
}
