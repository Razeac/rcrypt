// header file for all c++ libraries
#include <bits/stdc++.h>
using namespace std;
const int MAX_L  = 104857;
const char c_seq[96] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLM
NOPQRSTUVWXYZ1234567890+-*/.,\\<>?;':\"[]{}|_=`~!@#$%^&() ";
const short int seq[95][8] = {
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

// reverse the string and put the value back to dat
int** reverser(char* dat) {    
    int i, j = 0;
    int len = strlen(dat);
    i = len - 1;
    
    char RevStr[MAX_L] = {};
    while (i >= 0) {
        RevStr[j] = dat[i];
        j++;
        i--;
    }
    RevStr[j] = '\0';
    strcpy(dat, RevStr);
    // printf("%s\n",data);
    return 0;
}

// ADD SPACE AT THE END OF MESSAGE TO MAKE SURE THE MESSAGE LENGTH IS DIVISIBLE BY 8
char *add_space(char *data) {	
	unsigned int dat_len = strlen(data);
	if(dat_len % 8 != 0) {
		while (dat_len % 8 != 0) {
			data[dat_len] = ' ';
			dat_len++;
		}
	}
	data[dat_len] = '\0';
	return data;
}

// ON ENCRYPT, BEFORE REARRANGING WITH KEY SEQUENCE, SENDS 2 CHARECTER FROM FRONT TO BACK
char* front2back_en(char *data, const int x, const int dat_len) {
    char front[8] = {};
    int i = 0, j = 0;
    // x: number of charecters to move
    while (i < x) {
        front[i] = data[i];
        i++;
    }
    while(i < dat_len) {
        data[i-x]=data[i];
        i++;
    }
    while(j < x) {
        data[(i + j) - x] = front[j];
        j++;
    }
    return data;
}

// REARRANGE DATA (Splitted by LIST OF 8 CHARECTERS) BASED ON SEQUENCE BY THE KEY CHARECTER
// c: the current key charecter
char* _encrypt(char* data, char* c) {
    // backup of data to look at when rearranging
    char back[9] = {};
    int i = 0, j, x, n, loop;
    int serial[8];

    // getting serial
    for (loop = 0; loop < 8; loop++) {
        int ind;
        // e = strchr(c_seq, c);
        ind = (int) (strchr (c_seq, *c) - c_seq);
        serial[loop] = seq[ind][loop];
    }
    int len = strlen(data);

    while (i < len) {
        x = 0;
        n = i;

        // making 8 charecter list backuo
        while(n < i + 8) {
            back[x] = data[n];
            n++;
            x++;
        }
        x = 0;

        // the rearrange
        for (j = 0; j < 8; j++) {
            data[i + x] = back[serial[j] - 1];
            x = (x + 1) %8;
        }

        // moving to next 8 charecter
        i += 8;
    }
    return data;
}

// WHY FRONT2BACK 1ST, THEN ENCRYPT?
	// => because if the key is 1 charecter long, theres no meaning of front2back, 
    //also doing at the end has no special meaning to this encryption. 
    //So move them 1st, then do encryption to tighten the flow.
char *encrypt(char *data, char *key) {
	data = add_space(data);
	unsigned int key_i = 0;
	unsigned int dat_len = strlen(data);
	unsigned int key_len = strlen(key);
	while(key_i < key_len) {
 		front2back_en(data, 2, (int)dat_len);
		_encrypt(data, &key[key_i]);
		key_i++;
	}
	return data;
}

// ON DECRYPT, AFTER REARRANGING WITH KEY SEQUENCE, SENDS 2 CHARECTER FROM BACK TO FRONT
// x: number of charecters to move
char* b2f_de(data, 2) {
    char front[MAX_L] = {};
    int len = strlen(data), i = 0;
    while (i < len - x) {
        front[i] = data[i];
        i++;
    }
    i = 0;

    //strncpy(front,data,(size_t)len-x);
    while (i < x) {
        data[i] = data[len + i - x];
        i++;
    }
    i = 0;

    while (i < len - x) {
        data[i + x] = front[i];
        i++;
    }
    return data;
}

// REVERT BACK TO ORIGINAL STATE FROM REARRANGED CHARECTERS
	// things are same as _encrypt
char *_decrypt(char *data, char c)
{
    char back[9] = {};
    int i = 0, j, x, n, loop;
    int serial[8];

    for (loop = 0; loop < 8; loop++) {
        int ind;
        // e = strchr(c_seq, c);
        ind = (int)(strchr(c_seq, c) - c_seq);
        serial[loop] = seq[ind][loop];
    }
    unsigned int len = strlen(data);

    while (i < (int)len) {
        x = 0;
        n = i;

        while (n < i + 8) {
            back[x] = data[n];
            n++;
            x++;
        }
        x = 0;

        // the revertion
        for (j = 0; j < 8; j++) {
            // printf("%d",serial[j]);
            data[i + serial[j] - 1] = back[x];
            x++;
        }
        // printf("==");
        i += 8;
    }
    return data;
}

// REARRANGE BASED ON KEY SEQUENCE
// THEN MOVE 2 CHARECTERS FROM BACK TO FRONT
char *decrypt(char *data, char *key) {
	// int dat_i;
	data = add_space(data);
	// printf("\n1	%s",data);
	unsigned int key_i = 0;
	// unsigned int dat_len= strlen(data);
	unsigned int key_len = strlen(key);
	// printf("\n2	%s\t%s",data,key);
	reverser(key);
	// printf("\n3	%s\t%s",data,key);
	while(key_i < key_len) {
		// Decrypt 1st, then back2front
 		_decrypt(data, key[key_i]);
		// printf("\n5	%s\t%s",data,key);
		b2f_de(data);
	 	key_i++;
	}
	return data;
}

int main() {
    char input[MAX_L] = {};
    char key[MAX_L] = {};
    char input2[MAX_L];

    std::cout << "Enter message: ";
    std::cin.getline(input, MAX_L);
    // Remove newline character from input
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    // Copy input to input2
    strcpy(input2, input);

    std::cout << "Enter key: ";
    std::cin.getline(key, MAX_L);
    // Remove newline character from key
    if (key[strlen(key) - 1] == '\n') {
        key[strlen(key) - 1] = '\0';
    }

    double msg_len = strlen(input);
    double key_len = strlen(key);

    auto en_begin = std::chrono::high_resolution_clock::now();
    std::string light = encrypt(input.c_str(), key.c_str());
    auto en_end = std::chrono::high_resolution_clock::now();
    auto en_time_spent = std::chrono::duration<double>(en_end - en_begin).count();
        std::cout << "encrypted" << std::endl;
        std::cout << "=========" << std::endl;
        std::cout << light << std::endl;
        std::cout << "Encrypted in " << en_time_spent << "s" << std::endl;

    auto de_begin = std::chrono::high_resolution_clock::now();
    std::string dark = decrypt(input.c_str(), key.c_str());
    auto de_end = std::chrono::high_resolution_clock::now();
    auto de_time_spent = std::chrono::duration<double>(de_end - de_begin).count();
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