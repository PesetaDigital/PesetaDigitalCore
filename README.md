# Peseta Digital - La moneda para el día a día de los españoles
# Version: 1.0.0.0
Gracias a la tecnología de la cadena de bloques tenemos la mejor Peseta que jamas ha existido. 
Con la emisión establecida desde el inicio (2014), al igual que Bitcoin.
Con capacidad para hacer transacciones nacionales e internacionales cualquier día y en cualquier momento. 

# Contactar con el equipo:
Telegram:
**https://t.me/Pesetadigital**

 Website:
**https://pesetadigital.es**


# Especificaciones:
  - **MONEDAS TOTALES:** 166.386.000 PTD
  - **MONEDAS PRE-MINADAS EN BLOQUE 1 DE LA CADENA DE BLOQUES ANTERIOR PARA SWAP:**  143.508.000 PTD
  - **ALGORITMO:** x13
  - **TIEMPO ENTRE BLOQUES:** 300 segundos
  - **CONFIRMACIONES:** 100 para minería y 6 para transacciones

# Emisión monetaria desde el inicio de la Peseta:

  - Desde el bloque 0 la recompensa es: 166,386 PTC (enero 2014 a 9 de enero 2015 *)
  - En el bloque 525600 la recompensa cambia a: 83,193 PTC ( 9 de enero 2015 *)
  - En el bloque 550000 la recompensa cambia a: 50 PTC (enero  2015 *)
  - En el bloque 1051200 la recompensa cambia a: 25 PTC ( 2016 *)
  - En el bloque 1576800 la recompensa cambia a: 10 PTC (2017-2018 *)
  - En el bloque 2628000 la recompensa cambia a: 5 PTC ( 2019-2029 *)
  - En el bloque 8409600 la recompensa cambia a: únicamente las comisiones de la red


# Swap (Pesetacoin a Peseta Digital):

  - Fecha: 1 de mayo de 2021

# Fases de Peseta Digital:

  - Fase 1: Proof of Work + Proof of Stake: Del bloque genesis (0) hasta el bloque 30.000
  - Fase 2: Proof of Stake: Del bloque 30.000 en adelante

  - **RECOMPENSA POR BLOQUE POW:** 25 PTD 
  - **RECOMPENSA POR BLOQUE POS (Proof of Stake):** Máximo 25 PTD por bloque 

# Compile Source<br>
**Download and install the dependencies:**<br>
sudo apt-get install build-essential libboost-all-dev libcurl4-openssl-dev libdb5.3-dev libdb5.3++-dev libminiupnpc-dev qrencode libqrencode-dev git libtool automake autotools-dev autoconf pkg-config libssl-dev libgmp3-dev libevent-dev bsdmainutils
<br><br><br>
**Compile the daemon in the PesetaDigital/src directory:**<br>
cd PesetaDigital/src<br><br>
make -f makefile.unix USE_UPNP=1 USE_IPV6=1<br><br>
strip PesetaDigitald<br>
<br><br>
**Run daemon in the PesetaDigital/src directory:**<br>
./PesetaDigitald<br><br>
<br>
**(OPTIONAL)Compile the QT in the PesetaDigital directory:**<br>
sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler libqrencode-dev qt5-default<br><br>
qmake PesetaDigital-qt.pro "USE_UPNP=1" "USE_QRCODE=1"<br><br>
make -f Makefile<br><br>

# pesetadigital.conf
```sh
listen=1
txindex = 1
rpcuser=user
rpcpassword=Random_Password
rpcport=16638
port=16639
#(0=off, 1=on) daemon - run in the background as a daemon and accept commands
daemon=1
#(0=off, 1=on) server - accept command line and JSON-RPC commands
server=1
rpcallowip=127.0.0.1
testnet=0
addnode=seed.pesetacoin.info:16639
addnode=seed1.pesetacoin.info:16639
addnode=seed3.pesetacoin.info:16639
addnode=seed4.pesetacoin.info:16639
```

# pesetadigital.conf - Testnet
```sh
listen=1
txindex = 1
rpcuser=user
rpcpassword=Random_Password
rpcport=26638
port=26639
#(0=off, 1=on) daemon - run in the background as a daemon and accept commands
daemon=1
#(0=off, 1=on) server - accept command line and JSON-RPC commands
server=1
rpcallowip=127.0.0.1
testnet=1
addnode=seed1.pesetacoin.info:26639
addnode=seed2.pesetacoin.info:26639
addnode=seed3.pesetacoin.info:26639
addnode=seed4.pesetacoin.info:26639
```


#  Mining:
- Solo Cpu:
```sh
{
"_comment1" : "Any long-format command line argument ",
"_comment2" : "may be used in this JSON configuration file",

"api-bind" : "127.0.0.1:4048",

"url" : "localhost:16638",
"user" : "user",
"pass" : "password",

"algo" : "x13",
"threads" : 0,
"cpu-priority" : 0,
"cpu-affinity" : -1,

"benchmark" : false,
"debug" : true,
"protocol": false,
"quiet" : false
}
```

```sh
cpuminer -q --algo=x13 -o 127.0.0.1:16638 -u user-p password
```

- Solo GPU:
```sh
ccminer30.exe -q --algo=x13 -o 127.0.0.1:16638 -u user-p password
```
