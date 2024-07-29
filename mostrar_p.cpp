#include "mostrar_p.h"
Producto productos[100];
int cantidadProductos = 0;

void inicializarProductos() {
    productos[0] = {"Tarjeta Gráfica NVIDIA GeForce RTX 3080", 700};
    productos[1] = {"Tarjeta Gráfica AMD Radeon RX 6800 XT", 650};
    productos[2] = {"Tarjeta Gráfica NVIDIA GeForce GTX 1660 Super", 230};
    productos[3] = {"Procesador Intel Core i9-11900K", 550};
    productos[4] = {"Procesador AMD Ryzen 9 5900X", 500};
    productos[5] = {"Procesador Intel Core i5-11400F", 180};
    productos[6] = {"Memoria RAM Corsair Vengeance LPX 16GB (2 x 8GB) DDR4 3200MHz", 80};
    productos[7] = {"Memoria RAM G.Skill Trident Z RGB 32GB (2 x 16GB) DDR4 3600MHz", 170};
    productos[8] = {"Memoria RAM Kingston HyperX Fury 8GB (1 x 8GB) DDR4 2666MHz", 40};
    productos[9] = {"Memoria de almacenamiento Samsung 970 EVO Plus 1TB NVMe M.2 SSD", 150};
    productos[10] = {"Memoria de almacenamiento WD Blue 500GB SATA SSD", 55};
    productos[11] = {"Memoria de almacenamiento Seagate Barracuda 2TB 7200 RPM HDD", 60};
    productos[12] = {"Fuente de alimentación EVGA SuperNOVA 750 G5, 80 Plus Gold 750W", 130};
    productos[13] = {"Fuente de alimentación Corsair RM850x, 80 Plus Gold 850W", 140};
    productos[14] = {"Fuente de alimentación Seasonic Focus GX-650, 80 Plus Gold 650W", 100};
    productos[15] = {"Placa madre(base) ASUS ROG Strix Z590-E Gaming", 370};
    productos[16] = {"Placa madre(base) MSI B450 TOMAHAWK MAX", 110};
    productos[17] = {"Placa madre(base) Gigabyte Z490 AORUS Elite", 190};
    productos[18] = {"Monitor LG UltraGear 27GL83A-B 27\" QHD IPS", 380};
    productos[19] = {"Monitor ASUS TUF Gaming VG249Q 23.8\" FHD", 200};
    productos[20] = {"Monitor Dell UltraSharp U2720Q 27\" 4K", 550};
    productos[21] = {"Teclado Logitech G Pro X Mechanical Gaming Keyboard", 150};
    productos[22] = {"Teclado Razer BlackWidow Elite Mechanical Gaming Keyboard", 170};
    productos[23] = {"Teclado SteelSeries Apex Pro Mechanical Gaming Keyboard", 200};
    productos[24] = {"Ratón(mouse) Logitech MX Master 3", 100};
    productos[25] = {"Ratón(mouse) Razer DeathAdder V2", 70};
    productos[26] = {"Ratón(mouse) Corsair Dark Core RGB/SE", 90};
    productos[27] = {"Audífonos HyperX Cloud II Gaming Headset", 100};
    productos[28] = {"Audífonos SteelSeries Arctis 7 Wireless", 150};
    productos[29] = {"Audífonos Logitech G Pro X Wireless", 200};
    cantidadProductos = 30;
}


void verProductosAgregados() {
	inicializarProductos();
    if (cantidadProductos == 0) {
        cout << endl;
        cout << "No hay productos agregados." << endl;
        return;
    }
    for (int i = 0; i < cantidadProductos; i++) {
        cout << endl;
        cout << "Producto N°" << i + 1 << ": " << productos[i].nombre << endl;
        cout << "----------------------------" << endl;
    }
}

void verProductosAgregadosAlf() {
	inicializarProductos();
    if (cantidadProductos == 0) {
        cout << endl;
        cout << "No hay productos agregados." << endl;
        return;
    }
    Producto productosOrdenados[100];
    for (int i = 0; i < cantidadProductos; i++) {
        productosOrdenados[i] = productos[i];
    }
    for (int i = 0; i < cantidadProductos - 1; i++) {
        for (int j = 0; j < cantidadProductos - i - 1; j++) {
            if (productosOrdenados[j].nombre > productosOrdenados[j + 1].nombre) {
                Producto temp = productosOrdenados[j];
                productosOrdenados[j] = productosOrdenados[j + 1];
                productosOrdenados[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < cantidadProductos; i++) {
        cout << endl;
        cout << "Producto N°" << i + 1 << ": " << productosOrdenados[i].nombre << endl;
        cout << "----------------------------" << endl;
    }
}

void verProductosAgregadosPrecio() {
	inicializarProductos();
    if (cantidadProductos == 0) {
        cout << endl;
        cout << "No hay productos agregados." << endl;
        return;
    }
    
    Producto productosOrdenados[100];
    for (int i = 0; i < cantidadProductos; i++) {
        productosOrdenados[i] = productos[i];
    }

    for (int i = 0; i < cantidadProductos - 1; i++) {
        for (int j = 0; j < cantidadProductos - i - 1; j++) {
            if (productosOrdenados[j].precioPromedio > productosOrdenados[j + 1].precioPromedio) {
                Producto temp = productosOrdenados[j];
                productosOrdenados[j] = productosOrdenados[j + 1];
                productosOrdenados[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < cantidadProductos; i++) {
        cout << endl;
        cout << "Producto N°" << i + 1 << ": " << productosOrdenados[i].nombre << endl;
        cout << "Precio Promedio: " << productosOrdenados[i].precioPromedio << endl;
        cout << "----------------------------" << endl;
    }
}