void fancyFunction(int a);
void fancyFunction(int a, int b);

int main() {
    fancyFunction(5);
    fancyFunction(5, 10);

    return 0;
}

void fancyFunction(int a) {
    cout << "fancy!" << endl;
}

void fancyFunction(int a, int b) {
    cout << "so fancy!" << endl;
}