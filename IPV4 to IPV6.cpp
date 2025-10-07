#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'convertToIpv6' function below.
 *
 * The function accepts STRING ipv4address as parameter.
 */
void convertToIpv6(string ipv4address) {
    // Split the input string by dots '.'
    stringstream ss(ipv4address);
    string octet;
    vector<int> octets;

    while (getline(ss, octet, '.')) {
        cout << octet << endl;
        octets.push_back(stoi(octet));
    }

    // Check if the IPv4 address is valid
    if (octets.size() != 4) {
        cout << "Invalid IPv4 address!" << endl;
        return;
    }

    // If the first octet is 127, treat it as a loopback address
    if (octets[0] == 127) {
        cout << "::1" << endl; // Loopback address in IPv6
        return;
    }

    // Format and print the IPv6 address in uppercase
    printf("::FFFF:%02X%02X:%02X%02X\n", octets[0], octets[1], octets[2], octets[3]);
}

int main() {
    string ipv4address;
    getline(cin, ipv4address);

    convertToIpv6(ipv4address);

    return 0;
}
