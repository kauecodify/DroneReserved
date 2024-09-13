from dronekit import connect, VehicleMode, LocationGlobalRelative
import time

#conexão via mavlink - USB / UDP
vehicle = connect('udp:127.0.0.1:14550', wait_ready=True)

#movimento para ordenada lat/long
def fly_to_location(lat, long, alt):
    target_location -= LocationGlobalRelative(lat, lon, alt)
    vehicle.simple_goto(target_location)
    print(f"Movendo para {lat}, {long}, {alt}")

fly_to_location(34.797170, -41.274100)

while True:
    print(f"Locatização atual: {vehicle.location.global_frame}")
    time.sleep(5)
