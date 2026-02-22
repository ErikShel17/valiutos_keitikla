# 💱 Valiutų keityklos programa (C++)

Paprasta konsolinė programa, skirta valiutų keitimui naudojant C++ kalbą.

---

## 📌 Apie programą

Ši programa leidžia vartotojui:

- Palyginti valiutos kursą su euru (EUR)
- Pirkti valiutą (iš EUR į pasirinktą valiutą)
- Parduoti valiutą (iš pasirinktos valiutos į EUR)

Programa veikia cikle, todėl po kiekvienos operacijos galima atlikti kitą veiksmą.  
Baigiama tik pasirinkus **0 – Išeiti**.

---

## 💵 Galimos valiutos

Programa konvertuoja šias valiutas:

- EUR – Euras (pagrindinė valiuta)
- GBP – Didžiosios Britanijos svaras
- USD – JAV doleris
- INR – Indijos rupija

---

## ⚙️ Kaip veikia programa

### 1️⃣ Vartotojas pasirenka veiksmą:
- `1` – Palyginti kursą  
- `2` – Pirkti valiutą  
- `3` – Parduoti valiutą  
- `0` – Išeiti  

### 2️⃣ Pasirenka valiutą

### 3️⃣ Įveda sumą (jei reikia)

### 4️⃣ Programa apskaičiuoja rezultatą

- Perkant valiutą → suma **dauginama**
- Parduodant valiutą → suma **dalinama**
- Rezultatai rodomi su **2 skaičiais po kablelio**

---

## 🛠 Naudotos C++ sąvokos

- `while` ciklas
- `if / else`
- Kintamieji (`int`, `double`)
- `setprecision(2)` skaičių apvalinimui
- Paprasti matematiniai veiksmai

---

> Programa sukurta mokymosi tikslams 🚀