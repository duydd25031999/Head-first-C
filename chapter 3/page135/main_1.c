 #include <stdio.h>
 int main()
 {
    float latitude;
    float longitude;
    char info[80];

    puts("data=[");
    while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3) {

        if(latitude > 26 && latitude < 34) {
            if(longitude > -76 && longitude < -64) {
            }
            printf("%f, %f, %s\n", latitude, longitude, info);
        }       
    }
    puts("]");
    return 0;
}