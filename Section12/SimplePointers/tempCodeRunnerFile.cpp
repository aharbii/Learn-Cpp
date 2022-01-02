   int score{10};
   double high_temp{100.7};
   
   int *score_ptr {nullptr};
   
   score_ptr = &score;
   cout << "Value of score is: " << score << endl;
   cout << "Address of score is: " << &score << endl;
   cout << "Value of score_ptr is: " << score_ptr << endl;