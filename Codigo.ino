// --- Eje Norte - Sur (Vías NE - SO) ---
const int ROJO_NS     = 12; // Columna 2  (Pin 12)
const int AMARILLO_NS = 11; // Columna 4  (Pin 11)
const int VERDE_NS    = 10; // Columna 6  (Pin 10)
const int FLECHA_NS   = 9;  // Columna 8  (Pin 9)

// --- Eje Este - Oeste ---
const int ROJO_EO     = 6;  // Columna 12 (Pin 6)
const int AMARILLO_EO = 5;  // Columna 14 (Pin 5)
const int VERDE_EO    = 4;  // Columna 16 (Pin 4)
const int FLECHA_EO   = 3;  // Columna 18 (Pin 3)

// --- Fase Peatonal General ---
const int ROJO_PEAT   = 2;  // Columna 22 (Pin 2)
const int VERDE_PEAT  = 1;  // Columna 24 (Pin 1 - TX)

// Array con todos los pines para apagados rápidos
const int PINES[] = {1, 2, 3, 4, 5, 6, 9, 10, 11, 12};
const int TOTAL_PINES = 10;