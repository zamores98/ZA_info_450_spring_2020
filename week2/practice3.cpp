int main(){
    int input_variable = -1;
    while (1) {
      cout << "Year, so I can determine if it's a leap." << endl;
      cin >> input_variable;
      if (input_variable == 0){
        break;
      }
   cout << (input_variable % 4 == 0) << endl;
   cout << (input_variable % 100 == 0) << endl;
   cout << (input_variable % 400 == 0) << endl;
    if (input_variable % 100 == 0 && !( input_variable % 400 == 0)){
       cout << "This is not a leap year." << endl;
    }else if( input_variable % 4 == 0 ){
      cout << "This is a leap year." << endl;
    }else{
      cout << "This is not leap year." << endl;
    }
    }
    cout << "You entered 0, I'm out!" << endl;
    return 0;
  }

I'm not sure how to do this
