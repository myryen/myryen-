chars = ['ABCDEFGHIJKLMNOPQRSTUVWXYZ', 'abcdefghijklmnopqrstuvwxyz']


def encode(message, offset=13):
    enc_chars = str.maketrans(
        f'{chars[0]}{chars[1]}',
        f'{chars[0][offset:]}{chars[0][:offset]}{chars[1][offset:]}{chars[1][:offset]}'
    )
    return str.translate(message, enc_chars)


def decode(message, offset=13):
    dec_chars = str.maketrans(
        f'{chars[0][offset:]}{chars[0][:offset]}{chars[1][offset:]}{chars[1][:offset]}',
        f'{chars[0]}{chars[1]}'
    )
    return str.translate(message, dec_chars)


get_option = input("Choisissez [e]ncoder ou [d]ecoder (Defaut: e): ")
if get_option == 'e':
    message = input('Entrez votre message : ')
    offset = int(input('Choisissez le décalage (1-26): '))
    if offset < 1 or offset > 26:
        raise Exception(f'entrée invalide: {offset}')
    else:
        print(f'votre message encodé: {encode(message, offset)}')
elif get_option == 'd':
    message = input('Entrez le message codé: ')
    offset = int(input('Choisissez le décalage (1-26): '))
    if offset < 1 or offset > 26:
        raise Exception(f'entrée invalide: {offset}')
    else:
        print(f'votre.message décodé: {decode(message, offset)}')
else:
    raise Exception(f'option invalide: {get_option}')