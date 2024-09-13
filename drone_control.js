const net = require('net');

//config da conexão com o drone
const client = new net.Socket();
cliente.connect(14550, '127.0.0.1', () => {
    console.log('Conectado ao drone');
});

function moveToArea(lat, lon) {
    const command = 'MOVE ${lat} ${lon}\n';
    client.write(command);
    console.log('Enviado comando para mover para latitude: ${lat}, longitude: ${lon}');
}

moveToArea(34.797170, -41.274100)

client.end();