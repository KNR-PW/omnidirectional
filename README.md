# omnidirectional
Repozytorium zawierające kod źródłowy wykorzystywany przy projekcie robota Omnidirectional.
W naszym projekcie do kompilacji kodu używamy oprogramowania STM32CubeIde kompatybilnego z mikrokontrolerami stm32.
Kod źródłowy zawarty w repozytorium pozwala na proste sterowanie omnidirectionalem ruch do przodu przez zadany czas oraz obrót o 180 stopni.
W pliku o rozszerzeniu.ioc konfigurowane są piny na płytce stm32, w używanym przez nas kodzie wszystkie piny zadeklarowane są jako output.
Wszelkie zmiany należy zaczynać od konfiguracji w pliku o rozszerzeniu .ioc następnie po wprowadzeniu zmian, kod implementuje się wraz z załączeniem odpowiednich bibliotek.
