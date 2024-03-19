#include <iostream>
#include <cstring>
using namespace std;

int main()
{

                                                                                                    char tox[150];
                                                                                                    cin.getline(tox, 150, '.');
                                                                                                    int count = 0;
                                                                                                    // bareri qanaky
                                                                                                    for (int i = 0; i < strlen(tox);)
                                                                                                    {
                                                                                                                                                                                                        count++;
                                                                                                                                                                                                        while (tox[i] == ' ')
                                                                                                                                                                                                                                                                                                            i++;

                                                                                                                                                                                                        while (tox[i] != ' ')
                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                            i++;
                                                                                                                                                                                                        }
                                                                                                    }
                                                                                                    // nax qanaky
                                                                                                    int nax = 0;
                                                                                                    // toxeriqanak
                                                                                                    int toxeriqanak = 1;
                                                                                                    for (int i = 0; i < strlen(tox); i++)
                                                                                                                                                                                                        if (tox[i] == ':')
                                                                                                                                                                                                                                                                                                            nax++;
                                                                                                                                                                                                        else if (tox[i] == '\n')
                                                                                                                                                                                                                                                                                                            toxeriqanak++;

                                                                                                    cout << toxeriqanak << '\t' << nax << '\t' << count;

                                                                                                    return 0;
}