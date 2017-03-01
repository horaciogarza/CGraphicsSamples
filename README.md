# CGraphicsSamples

Instrucciones de Instalación:

<ol>
  <li>Baja los archivos de esta página.</li>
  <li>Copia graphics.h y winbgim.h (Ubicados en la carpeta instrucciones) a la carpeta <b>include</b> y <b>MinGW32/include</b> </li>
  <li>Copia <b>libbgi.a</b> a la carpeta <b>lib</b> y <b>MinGW32/lib</b></li>
  <li>Abre Dev-C++, crea proyecto de consola y pega cualquier código que use graphics.h en tu main.</li>
  <li>Project > Project Options > Parameters > *Copiar en Linker, lo que esté dentro de Linker.txt de la carpeta instrucciones* > Aceptar</li>
  <li>Repetir paso 5 (sin copiar)</li>
</ol>

<h4>Preguntas/Errores Frecuentes</h4>
<ul>
  <li>
  Al momento de compilar dice <i>** missing ...</i> <br>
  R: Ve a Project Options y da clic en OK
  </li>
  
  <li>
  No reconoce la libreria graphics.h <br>
  R: No agregaste la libreria graphics.h a la carpeta include NI a la carpeta MinGW/Include
  </li>
  
  
</ul>
