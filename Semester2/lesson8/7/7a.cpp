// բոլոր բառերը՝ հակառակ հերթականությամբ, 


int main()
{
    char tox[100] = "cat, dog, birld";
    // cin.getline(tox, 150, ".");

    int counter = 1;

    for (int i = 0; i < strlen(tox); i++)
        if (tox[i] == ',')
            counter++;

    char *bar = strtok(tox, ",");
    char **matrix = new char *[counter];
    strcpy(matrix[0], bar);
    for (int i = 1; i < counter; i++)
        matrix[i] = strtok(NULL, ",");

    for (int i = counter - 1 ; i >= 0; --i)
        cout << matrix[i] << '\t';
}

