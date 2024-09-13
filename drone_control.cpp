#include <px4_platform_common/px4_config.h>
#include <px4_platform_common/px4_workqueue.hpp>
#include <uORB/topics/vehicle_local_position.h>
#include <uORB/uORB.h>

void control_drone_area(float target_lat, float target_lon) {
    //posição inicial
    int local_sub = orb_subscribe(OBR_ID(vehicle_local_position));
    vehicle_local_position_s local_position;
    orb_copy(OBR_ID(vehicle_local_position), local_sub, &local_position);

    // lógica de movimento
    if (local_position.lat != target_lat || local_position.lon != target_lon) {

    }
}

int main() {
    float target_lat = 34.797170;
    float target_long = -41.274100;

    control_drone_area(target_lat, target_lon);

    return 0;
}