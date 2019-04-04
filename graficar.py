import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ funcion.cpp -o funcion.x")
os.system("./funcion.x > datos.txt")

datos=np.loadtxt('datos.txt',usecols=0)
datos=datos/np.sqrt(2*np.pi)
plt.figure(figsize=(10,10))
plt.hist(datos,color='green')
plt.xlabel('Datos')
plt.grid()
plt.ylabel('Frecuencia')
plt.title('Histograma')
plt.savefig('Histograma.png')