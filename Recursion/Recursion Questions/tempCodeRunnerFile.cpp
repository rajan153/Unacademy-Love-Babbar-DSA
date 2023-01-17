void printPowerSet(string input, int index, string output) {
//     //base condition
//     if(index == input.length()) {
//         cout << output << endl;
//         return ;
//     }

//     char ch = input[index];

//     //exclude ch
//     printPowerSet(input, index+1, output);

//     //include ch
//     output.push_back(ch);
//     printPowerSet(input, index+1, output);

// }

// void findCombinations(string input, int i, string output) {
//     //base case
//     if(i == input.length()) {
//         cout << output << endl;
//         return ;
//     }

//     char ch = input[i];
//     //no space - put character without space
//     output.push_back(ch);
//     findCombinations(input, i+1, output);

//     //with space - put character with space
//     output.push_back(' ');
    
//     if(input[i+1] != '\0')
//     findCombinations(input, i+1, output);

// }
