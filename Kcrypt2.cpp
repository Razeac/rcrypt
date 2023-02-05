#include <iostream>
#include <chrono>
#include <stdio.h>
#include <string.h>
#include <array>
const int MAX_L  = 104857;
const std::string c_seq = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890+-*/.,\\<>?;':\"[]{}|_=`~!@#$%^&() ";
const short int seq[95][8]={
{5, 8, 1, 7, 2, 4, 3, 6},
{7, 2, 1, 6, 3, 8, 4, 5},
{3, 6, 2, 4, 7, 5, 1, 8},
{1, 8, 3, 6, 5, 7, 4, 2},
{2, 7, 8, 5, 4, 1, 3, 6},
{3, 4, 6, 8, 1, 2, 5, 7},
{2, 7, 4, 8, 3, 5, 6, 1},
{8, 6, 1, 5, 4, 2, 7, 3},
{4, 8, 1, 6, 3, 2, 5, 7},
{1, 7, 8, 2, 3, 4, 6, 5},
{1, 8, 3, 6, 2, 4, 7, 5},
{1, 4, 2, 8, 5, 3, 6, 7},
{5, 4, 7, 8, 3, 2, 1, 6},
{8, 2, 1, 4, 5, 6, 3, 7},
{6, 5, 4, 7, 1, 8, 3, 2},
{5, 8, 7, 1, 4, 2, 6, 3},
{2, 6, 4, 8, 1, 7, 3, 5},
{6, 3, 7, 5, 4, 1, 2, 8},
{4, 5, 7, 2, 6, 1, 3, 8},
{7, 3, 6, 5, 2, 1, 8, 4},
{3, 6, 4, 5, 1, 8, 2, 7},
{5, 1, 2, 8, 4, 7, 6, 3},
{6, 4, 2, 1, 7, 3, 5, 8},
{5, 7, 4, 2, 6, 3, 1, 8},
{7, 1, 2, 5, 6, 3, 8, 4},
{4, 8, 2, 1, 5, 7, 3, 6},
{3, 5, 8, 7, 1, 2, 6, 4},
{7, 5, 6, 8, 4, 2, 3, 1},
{7, 2, 1, 6, 5, 3, 8, 4},
{6, 3, 1, 8, 7, 5, 4, 2},
{3, 1, 5, 8, 7, 6, 4, 2},
{8, 3, 1, 5, 7, 4, 2, 6},
{7, 5, 8, 1, 3, 6, 2, 4},
{7, 5, 1, 8, 4, 3, 6, 2},
{7, 2, 3, 1, 6, 5, 4, 8},
{1, 2, 6, 4, 8, 7, 3, 5},
{7, 6, 2, 5, 4, 3, 8, 1},
{2, 8, 5, 3, 7, 6, 1, 4},
{4, 3, 5, 6, 2, 8, 7, 1},
{8, 1, 6, 2, 7, 5, 3, 4},
{4, 8, 3, 6, 1, 5, 2, 7},
{3, 4, 7, 6, 2, 8, 5, 1},
{4, 5, 8, 3, 6, 1, 2, 7},
{5, 4, 6, 2, 3, 7, 8, 1},
{7, 4, 3, 5, 1, 6, 8, 2},
{7, 4, 1, 5, 3, 8, 2, 6},
{5, 2, 8, 3, 7, 1, 4, 6},
{8, 2, 5, 6, 1, 7, 4, 3},
{7, 5, 1, 4, 3, 6, 8, 2},
{8, 5, 4, 6, 1, 3, 2, 7},
{6, 5, 7, 4, 8, 2, 1, 3},
{8, 3, 1, 7, 5, 4, 6, 2},
{2, 6, 7, 8, 4, 3, 1, 5},
{5, 2, 7, 8, 4, 3, 6, 1},
{4, 6, 8, 3, 1, 5, 7, 2},
{5, 1, 6, 3, 8, 7, 4, 2},
{7, 6, 3, 5, 1, 4, 2, 8},
{6, 8, 2, 7, 3, 4, 5, 1},
{7, 3, 5, 4, 6, 8, 1, 2},
{5, 8, 3, 7, 2, 4, 1, 6},
{7, 8, 6, 2, 1, 4, 5, 3},
{4, 8, 1, 3, 5, 2, 6, 7},
{8, 6, 7, 2, 5, 4, 3, 1},
{5, 8, 4, 2, 6, 3, 7, 1},
{4, 8, 7, 5, 2, 1, 3, 6},
{7, 1, 4, 2, 5, 8, 3, 6},
{2, 5, 1, 3, 7, 4, 6, 8},
{3, 7, 1, 4, 8, 2, 6, 5},
{7, 5, 6, 4, 8, 2, 3, 1},
{3, 8, 4, 7, 6, 2, 5, 1},
{4, 6, 3, 5, 8, 1, 2, 7},
{7, 2, 8, 4, 1, 3, 5, 6},
{4, 6, 7, 2, 1, 3, 8, 5},
{8, 2, 1, 5, 6, 4, 7, 3},
{6, 8, 5, 2, 4, 7, 3, 1},
{3, 7, 6, 8, 1, 5, 4, 2},
{3, 8, 1, 7, 5, 2, 6, 4},
{7, 2, 5, 6, 4, 3, 1, 8},
{3, 4, 1, 8, 2, 7, 5, 6},
{4, 7, 6, 2, 5, 1, 3, 8},
{6, 1, 3, 2, 5, 4, 7, 8},
{8, 4, 3, 5, 7, 2, 6, 1},
{3, 5, 6, 7, 1, 2, 8, 4},
{1, 3, 8, 6, 2, 7, 5, 4},
{5, 4, 1, 7, 6, 3, 8, 2},
{6, 3, 2, 1, 4, 5, 7, 8},
{3, 4, 5, 8, 7, 1, 2, 6},
{5, 6, 3, 8, 4, 2, 7, 1},
{7, 3, 4, 2, 5, 6, 8, 1},
{4, 6, 1, 3, 7, 2, 8, 5},
{1, 3, 6, 2, 8, 5, 7, 4},
{7, 1, 8, 5, 6, 4, 3, 2},
{3, 1, 5, 2, 8, 4, 6, 7},
{8, 5, 2, 4, 3, 1, 6, 7},
{2, 8, 7, 1, 4, 5, 3, 6}
};

std::string reverse(std::string &dat)
{
    int i = dat.length() - 1, j = 0;
    std::string RevStr;
    while (i >= 0) {
        RevStr += dat[i];
        j++;
        i--;
    }
    dat = RevStr;
    return dat;
}

std::string add_space(std::string & data)
{
    int dat_len = data.length();
    if (dat_len %8 != 0)
    {
        while (dat_len %8 != 0)
        {
        data += ' ';
        dat_len++;
        }
    }
    return data;
}

std::string front2back_en(std::string & data, const int x)
{
    std::string front;
    int i = 0, j = 0;
    while (i < x)
    {
        front += data[i];
        i++;
    }
    while(i < data.length())
    {
        data[i-x]=data[i];
        i++;
    }
    while(j < x)
    {
    data[(i + j) - x] = front[j];
    j++;
    }
    return data;
}

std::string _encrypt(std::string &data, char c)
{
    std::string back;
    int i = 0, j, x, n, loop;
    int serial[8];

    for (loop = 0; loop < 8; loop++) 
    {
        int ind;
        ind = (int) (strchr (c_seq, c) - c_seq);
        serial[loop] = seq[ind][loop];
    }
    int len=data.length();
    while (i < len)
    {
        x = 0;
        n = i;
        while(n < i + 8)
        {
            back += data[n];
            n++;
            x++;
        }
        x = 0;
        for (j = 0; j < 8; j++)
        {
            data[i + x] = back[serial[j] - 1];
            x = (x + 1) %8;
        }
        i += 8;
    }
return data;
}

std::string encrypt(std::string & data, std::string key)
{
    add_space(data);
    int key_i = 0;
    int dat_len = data.length();
    int key_len = key.length();
    while (key_i < key_len) 
    {
        front2back_en(data, 2, dat_len);
        _encrypt(data, key[key_i]);
        key_i++;
    }
return data;
}

std::string b2f_de(std::string & data)
{
    std::string front;
    int x = 2, len = data.length(), i = 0;
    while (i < len - x) 
    {
        front.push_back(data[i]);
        i++;
    }
    i = 0;
    while (i < x) 
    {
        data[i] = data[len + i - x];
        i++;
    }
    i = 0;
    while (i < len - x)
    {
        data[i + x] = front[i];
        i++;
    }
return data;
}

std::string _decrypt(std::string & data, char c)
{
    std::string back;
    int i = 0, j, x, n, loop;
    int serial[8];
    for (loop = 0; loop < 8; loop++)
    {
        int ind;
        ind = static_cast<int>(c_seq.find(c));
        serial[loop] = seq[ind][loop];
    }
    int len = data.length();
    while (i < len)
    {
        x = 0;
        n = i;
        while (n < i + 8)
        {
            back.push_back(data[n]);
            n++;
            x++;
        }
        x = 0;
        for (j = 0; j < 8; j++)
        {
            data[i + serial[j] - 1] = back[x];
            x++;
        }
    i += 8;
    }
return data;
}

std::string decrypt(std::string & data, std::string key)
{
    add_space(data);
    int key_i = 0;
    int key_len = key.length();
    reverse(key.begin(), key.end());
    while (key_i < key_len)
    {
        _decrypt(data, key[key_i]);
        b2f_de(data);
        key_i++;
    }
return data;
}

int main() {
    std::string input;
    std::string key;

        std::cout << "Enter message: ";
    getline(std::cin, input);
        std::cout << "Enter key: ";
    getline(std::cin, key);

    int msg_len = input.length();
    int key_len = key.length();

    auto en_begin = chrono::high_resolution_clock::now();
    std::string light = encrypt(input.c_str(), key.c_str());
    auto en_end = chrono::high_resolution_clock::now();
    auto en_time_spent = chrono::duration<double>(en_end - en_begin).count();
        std::cout << "encrypted" << std::endl;
        std::cout << "=========" << std::endl;
        std::cout << light << std::endl;
        std::cout << "Encrypted in " << en_time_spent << "s" << std::endl;

    auto de_begin = chrono::high_resolution_clock::now();
    std::string dark = decrypt(input.c_str(), key.c_str());
    auto de_end = chrono::high_resolution_clock::now();
    auto de_time_spent = chrono::duration<double>(de_end - de_begin).count();
        std::cout << "decrypted" << std::endl;
        std::cout << "=========" << std::endl;
        std::cout << dark << std::endl;
        std::cout << "Decrypted in " << de_time_spent << "s" << std::endl;

        std::cout << "Msg len= " << msg_len << std::endl;
        std::cout << "Key len= " << key_len << std::endl;
        std::cout << "Encrypted in " << en_time_spent << "s" << std::endl;
        std::cout << "Decrypted in " << de_time_spent << "s" << std::endl;
        std::cout << "  time per key (en): " << (double)(en_time_spent / key_len) << "s" << std::endl;
        std::cout << "  time per key (de): " << (double)(de_time_spent / key_len) << "s" << std::endl;
    return 0;
}



constexpr int MAX_L = 104857;
const std::string c_seq = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890+-*/.,\\<>?;':\"[]{}|_=`~!@#$%^&() ";
const std::array<std::array<short int, 8>, 95> seq = {