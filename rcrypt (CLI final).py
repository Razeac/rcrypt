#Python3 program to Convert list of
# strings to space separated string

seq={
"a": [5, 8, 1, 7, 2, 4, 3, 6],
"b": [7, 2, 1, 6, 3, 8, 4, 5],
"c": [3, 6, 2, 4, 7, 5, 1, 8],
"d": [1, 8, 3, 6, 5, 7, 4, 2],
"e": [2, 7, 8, 5, 4, 1, 3, 6],
"f": [3, 4, 6, 8, 1, 2, 5, 7],
"g": [2, 7, 4, 8, 3, 5, 6, 1],
"h": [8, 6, 1, 5, 4, 2, 7, 3],
"i": [4, 8, 1, 6, 3, 2, 5, 7],
"j": [1, 7, 8, 2, 3, 4, 6, 5],
"k": [1, 8, 3, 6, 2, 4, 7, 5],
"l": [1, 4, 2, 8, 5, 3, 6, 7],
"m": [5, 4, 7, 8, 3, 2, 1, 6],
"n": [8, 2, 1, 4, 5, 6, 3, 7],
"o": [6, 5, 4, 7, 1, 8, 3, 2],
"p": [5, 8, 7, 1, 4, 2, 6, 3],
"q": [2, 6, 4, 8, 1, 7, 3, 5],
"r": [6, 3, 7, 5, 4, 1, 2, 8],
"s": [4, 5, 7, 2, 6, 1, 3, 8],
"t": [7, 3, 6, 5, 2, 1, 8, 4],
"u": [3, 6, 4, 5, 1, 8, 2, 7],
"v": [5, 1, 2, 8, 4, 7, 6, 3],
"w": [6, 4, 2, 1, 7, 3, 5, 8],
"x": [5, 7, 4, 2, 6, 3, 1, 8],
"y": [7, 1, 2, 5, 6, 3, 8, 4],
"z": [4, 8, 2, 1, 5, 7, 3, 6],
"A": [3, 5, 8, 7, 1, 2, 6, 4],
"B": [7, 5, 6, 8, 4, 2, 3, 1],
"C": [7, 2, 1, 6, 5, 3, 8, 4],
"D": [6, 3, 1, 8, 7, 5, 4, 2],
"E": [3, 1, 5, 8, 7, 6, 4, 2],
"F": [8, 3, 1, 5, 7, 4, 2, 6],
"G": [7, 5, 8, 1, 3, 6, 2, 4],
"H": [7, 5, 1, 8, 4, 3, 6, 2],
"I": [7, 2, 3, 1, 6, 5, 4, 8],
"J": [1, 2, 6, 4, 8, 7, 3, 5],
"K": [7, 6, 2, 5, 4, 3, 8, 1],
"L": [2, 8, 5, 3, 7, 6, 1, 4],
"M": [4, 3, 5, 6, 2, 8, 7, 1],
"N": [8, 1, 6, 2, 7, 5, 3, 4],
"O": [4, 8, 3, 6, 1, 5, 2, 7],
"P": [3, 4, 7, 6, 2, 8, 5, 1],
"Q": [4, 5, 8, 3, 6, 1, 2, 7],
"R": [5, 4, 6, 2, 3, 7, 8, 1],
"S": [7, 4, 3, 5, 1, 6, 8, 2],
"T": [7, 4, 1, 5, 3, 8, 2, 6],
"U": [5, 2, 8, 3, 7, 1, 4, 6],
"V": [8, 2, 5, 6, 1, 7, 4, 3],
"W": [7, 5, 1, 4, 3, 6, 8, 2],
"X": [8, 5, 4, 6, 1, 3, 2, 7],
"Y": [6, 5, 7, 4, 8, 2, 1, 3],
"Z": [8, 3, 1, 7, 5, 4, 6, 2],
"1": [2, 6, 7, 8, 4, 3, 1, 5],
"2": [5, 2, 7, 8, 4, 3, 6, 1],
"3": [4, 6, 8, 3, 1, 5, 7, 2],
"4": [5, 1, 6, 3, 8, 7, 4, 2],
"5": [7, 6, 3, 5, 1, 4, 2, 8],
"6": [6, 8, 2, 7, 3, 4, 5, 1],
"7": [7, 3, 5, 4, 6, 8, 1, 2],
"8": [5, 8, 3, 7, 2, 4, 1, 6],
"9": [7, 8, 6, 2, 1, 4, 5, 3],
"0": [4, 8, 1, 3, 5, 2, 6, 7],
"+": [8, 6, 7, 2, 5, 4, 3, 1],
"-": [5, 8, 4, 2, 6, 3, 7, 1],
"*": [4, 8, 7, 5, 2, 1, 3, 6],
"/": [7, 1, 4, 2, 5, 8, 3, 6],
".": [2, 5, 1, 3, 7, 4, 6, 8],
",": [3, 7, 1, 4, 8, 2, 6, 5],
"\\": [7, 5, 6, 4, 8, 2, 3, 1],
"<": [3, 8, 4, 7, 6, 2, 5, 1],
">": [4, 6, 3, 5, 8, 1, 2, 7],
"?": [7, 2, 8, 4, 1, 3, 5, 6],
";": [4, 6, 7, 2, 1, 3, 8, 5],
"'": [8, 2, 1, 5, 6, 4, 7, 3],
":": [6, 8, 5, 2, 4, 7, 3, 1],
'\"': [3, 7, 6, 8, 1, 5, 4, 2],
"[": [3, 8, 1, 7, 5, 2, 6, 4],
"]": [7, 2, 5, 6, 4, 3, 1, 8],
"{": [3, 4, 1, 8, 2, 7, 5, 6],
"}": [4, 7, 6, 2, 5, 1, 3, 8],
"|": [6, 1, 3, 2, 5, 4, 7, 8],
"_": [8, 4, 3, 5, 7, 2, 6, 1],
"=": [3, 5, 6, 7, 1, 2, 8, 4],
"`": [1, 3, 8, 6, 2, 7, 5, 4],
"~": [5, 4, 1, 7, 6, 3, 8, 2],
"!": [6, 3, 2, 1, 4, 5, 7, 8],
"@": [3, 4, 5, 8, 7, 1, 2, 6],
"#": [5, 6, 3, 8, 4, 2, 7, 1],
"$": [7, 3, 4, 2, 5, 6, 8, 1],
"%": [4, 6, 1, 3, 7, 2, 8, 5],
"^": [1, 3, 6, 2, 8, 5, 7, 4],
"&": [7, 1, 8, 5, 6, 4, 3, 2],
"(": [3, 1, 5, 2, 8, 4, 6, 7],
")": [8, 5, 2, 4, 3, 1, 6, 7],
" ": [2, 8, 7, 1, 4, 5, 3, 6],
"’": [6, 5, 7, 3, 4, 8, 1, 2],
"—": [3, 2, 8, 4, 6, 5, 7, 1],
}

def _encrypt(text,C): 
	i=0
	serial= seq[C]
	le=len(text)

	while i<le:
		back=text[i:i+8]
		x=0
		#print('len',le)
		for j in serial:
			#print('i+x',i+x,'\tj',j-1)
			text[i+x]=back[j-1]
			x=(x+1)%8

		i+=8
	return text


def _decrypt(text,C):


	#key=key[::-1]
	serial=seq[C]
	i=0
	le=len(text)
	while i<le:
		x=0
		back=text[i:i+8]
		for j in serial:
			text[i+ j-1]=back[x]
			x=(x+1)%8
		i+=8
	return text

def encrypt(text, key):
	text+=" "*((8-len(text)%8)%8)
	text=list(text)
	for c in key:
		text=text[2:]+text[:2]
		text= _encrypt(text, c)
	return (''.join(text))

def decrypt(text, key):
	text+=" "*((8-len(text)%8)%8)
	text=list(text)
	key=key[::-1]
	for c in key:
		text=_decrypt(text,c)
		text=text[-2:]+text[:-2]

	return (''.join(text))


from time import time


print('Welcome to Rcryption.una')

def test(msg=False,key=False):
	if msg==False:
		msg=input('Enter your message: ')
	if key==False:
		key=input('Enter your key: ')
	tt=time()
	light=encrypt(msg,key)
	en_tt=(time()-tt)
	print('\n\n     ============\n       encrypted\n     ============')
	
	print('\n"'+light+'"\n\nEncrypted in %fs'%en_tt)

	tt=time()
	dark=decrypt(msg,key)
	de_tt=(time()-tt)
	print('\n\n     ============\n       decrypted\n     ============')
	
	print('\n"'+dark+'"\n\nDecrypted in %fs'%de_tt)

	print('\n\nMsg len=', len(msg),'\n key len=', len(key),'\nEncrypted in %fs'%en_tt,'\nDecrypted in %fs'%de_tt,'\n time per key (en): ', en_tt/len(key),'\n time per key (de): ', de_tt/len(key))

	tt=time()
	re_msg=decrypt(light, key)
	re_tt=(time()-tt)
	if msg+" "*((8-len(msg)%8)%8)==re_msg:
		print("Tested\nPassed!\nTest time taken=%fs"%re_tt)
	else:
		print("Tested\nFaileded!\nTest time taken=%fs"%re_tt)


while True:
	test()

test_msg='I do well in school, and people think I am smart because of it. But it’s not true. In fact, three years ago I struggled in school. However, two years ago I decided to get serious about school and made a few changes. First, I decided I would become interested in whatever was being taught, regardless of what other people thought. I also decided I would work hard every day and never give up on any assignment. I decided to never, never fall behind. Finally, I decided to make school a priority over friends and fun. After implementing these changes, I became an active participant in classroom discussions. Then my test scores began to rise. I still remember the first time that someone made fun of me because “I was smart.” How exciting! It seems to me that being smart is simply a matter of working hard and being interested. After all, learning a new video game is hard work even when you are interested. Unfortunately, learning a new video game doesn’t help you get into college or get a good job. Last year was the first time I had ever been the new kid at school. For the first four days, I was completely alone. I don’t think I even spoke to a single person. Finally, at lunch on the fifth day, Karen Watson walked past her usual table and sat down right next to me. Even though I was new, I had already figured out who Karen Watson was. She was popular. Pretty soon, all of Karen’s friends were sitting there right next to me. I never became great friends with Karen, but after lunch that day, it seemed like all sorts of people were happy to be my friend. You cannot convince me that Karen did not know what she was doing. I have a great respect for her, and I learned a great deal about what it means to be a true leader.People often install a kitty door, only to discover that they have a problem. The problem is their cat will not use the kitty door. There are several common reasons why cats won’t use kitty doors. First, they may not understand how a kitty door works. They may not understand that it is a little doorway just for them. Second, many kitty doors are dark, and cats cannot see to the other side. As such, they can’t be sure of what is on the other side of the door, so they won’t take the risk. One last reason cats won’t use kitty doors is because some cats don’t like the feeling of pushing through the door and having the door drag across their back. But don’t worry—there is a solution for this kitty-door problem.People often install a kitty door, only to discover that they have a problem. The problem is their cat will not use the kitty door. There are several common reasons why cats won’t use kitty doors. First, they may not understand how a kitty door works. They may not understand that it is a little doorway just for them. Second, many kitty doors are dark, and cats cannot see to the other side. As such, they can’t be sure of what is on the other side of the door, so they won’t take the risk. One last reason cats won’t use kitty doors is because some cats don’t like the feeling of pushing through the door and having the door drag across their back. But don’t worry—there is a solution for this kitty-door problem.People often install a kitty door, only to discover that they have a problem. The problem is their cat will not use the kitty door. There are several common reasons why cats won’t use kitty doors. First, they may not understand how a kitty door works. They may not understand that it is a little doorway just for them. Second, many kitty doors are dark, and cats cannot see to the other side. As such, they can’t be sure of what is on the other side of the door, so they won’t take the risk. One last reason cats won’t use kitty doors is because some cats don’t like the feeling of pushing through the door and having the door drag across their back. But don’t worry—there is a solution for this kitty-door problem.People often install a kitty door, only to discover that they have a problem. The problem is their cat will not use the kitty door. There are several common reasons why cats won’t use kitty doors. First, they may not understand how a kitty door works. They may not understand that it is a little doorway just for them. Second, many kitty doors are dark, and cats cannot see to the other side. As such, they can’t be sure of what is on the other side of the door, so they won’t take the risk. One last reason cats won’t use kitty doors is because some cats don’t like the feeling of pushing through the door and having the door drag across their back. But don’t worry—there is a solution for this kitty-door problem.People often install a kitty door, only to discover that they have a problem. The problem is their cat will not use the kitty door. There are several common reasons why cats won’t use kitty doors. First, they may not understand how a kitty door works. They may not understand that it is a little doorway just for them. Second, many kitty doors are dark, and cats cannot see to the other side. As such, they can’t be sure of what is on the other side of the door, so they won’t take the risk. One last reason cats won’t use kitty doors is because some cats don’t like the feeling of pushing through the door and having the door drag across their back. But don’t worry—there is a solution for this kitty-door problem.'*100

test_key='This began as one paragraph, but needed two—one for the problem and one for the solution. Also, notice that the second paragraph is a process paragraph. It would be very easy to add an introduction and conclusion to these two paragraphs and have a complete essay!'*10


# test(test_msg, test_key)


result='''
Welcome to Rcryption.una


     ============
       encrypted
     ============

Encrypted in 0.254299s


     ============
       decrypted
     ============

Msg len= 5306
 key len= 263
Encrypted in 0.254299s
Decrypted in 0.261047s
 time per key (en):  0.0009669178792279029
 time per key (de):  0.0009925746192496992
Tested
Passed!
Test time taken=0.261832s
'''

long_test_result='''
Msg len= 530600
 key len= 2630
Encrypted in 271.080402s
Decrypted in 278.949799s
 time per key (en):  0.1030723963400257
 time per key (de):  0.10606456228988706
Tested
Passed!
Test time taken=266.160028s
'''

