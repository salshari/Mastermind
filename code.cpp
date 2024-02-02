class Code{
private:
    int n;
    int m;
    vector<int> secretCode;
public:
    Code(int length, int range): n(length), m(range) {}

    void randomlyInitialize(){
        secretCode.clear();
        for (int i=0;i<n;i++){
            secretCode.push_back(rand()%m);

        }
    }

    int checkCorrect(const vector<int>& guess){
        if (guess.size() != n){
            throw invalid_argument("Invalid guess length");
        }
        int correctDigits = 0;
        for (int i=0; i<n; i++){
            if (guess[i]==secretCode[i]){
                correctDigits +=1;
            }
        }
        return correctDigits;
    }

    int checkIncorrect(const vector<int>&guess){
        if (guess.size() !=n){
            throw invalid_argument("Invalid guess length");
        }
        int incorrectDigits = 0;
        vector<bool> secretUsed(n,false);

        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if(!secretUsed[j]&& guess[i] == secretCode[j]){
                    incorrectDigits +=1;
                    secretUsed[j]=true;
                    break;
                }
            }
        }
        return incorrectDigits;
    }
    const vector<int>&getSecretCode() const {
        return secretCode;
    }

};