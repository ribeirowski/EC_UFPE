"""
---------------------------------------------------------------------------------------------
Construa um programa em Opencv2 que faça o seguinte:

1. Abra duas imagens diferentes: a imagem de uma pessoa (pode ser a sua foto) e
a de um objeto ou de um animal. Essas imagens precisam ter o mesmo tamanho
(resolução em termos de linhas e colunas).

2. Usando a função de blending do Opencv2, gere outra imagem resultante da fusão de imagens,
variando os pesos da imagem da pessoa e a segunda imagem. Faça a constante igual a zero e
defina o peso da segunda imagem como sendo 1 menos o peso da imagem da pessoa.

3. Agora use uma trackbar para capturar o peso da imagem da pessoa e exibir em tempo real
a imagem resultante da fusão. Perceba como uma imagem vai se tornando a outra.

4. Salve o quadro original capturado e os quadros modificados como imagens em extensão PNG.

* Lembre-se de sempre liberar os recursos ao final.
---------------------------------------------------------------------------------------------
"""

import numpy as np
import cv2

