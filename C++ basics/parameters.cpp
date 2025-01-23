int maxx(n1,n2){
    if n1 > = n2 {
        return n1;
    }
    return n2;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    cout << maxx(n1, n2) << endl;
    return 0;
}
