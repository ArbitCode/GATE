# :fire: GATE is all about PRACTICE :crossed_fingers:

## :books: [Syllabus](syllabus.md#my-table)

## :traffic_light: [Resources](Resources.md)

## VScode Setup

✅ [Install Visual Studio Code](https://code.visualstudio.com/Download)

✅ **Clone Respository**

```bash
#Clone into GATE dir
git clone https://github.com/ArbitCode/GATE.git GATE
#Open GATE dir in VSCode 
code GATE
#change dir
cd GATE
#Update-index to assume unchanged input.txt 
git update-index --assume-unchanged InOutPutFile/input.txt

```

✅ **Import VScode Profile For Enhanced View**  

- Press `Ctrl+Shift+P` to open the command Palette.  

- Type `Profiles: Import Profile` and select it.  

- Paste Gist URL to import profile [https://gist.github.com/ArbitCode/517c58900f0bee9933e54708cbf96d1e](https://gist.github.com/ArbitCode/517c58900f0bee9933e54708cbf96d1e)  

- Press `Enter`  

- Press `Create Profile` button.  

- Press `Enter`  

### ✅ **How to Build, Run and Clean C/C++ Programme**

#### 🏃‍♀️ VSCode Run Task

- On Windows/MacOS/Linux
  - Write input value into [input.txt](InOutPutFile/input.txt).
  - Press `Ctrl+Shift+P` to open the command Palette.
  - Type `Tasks: Run Task` and press Enter
  - Type `C/C++: Run on Windows` and press Enter.
  - Output written into [output.txt](InOutPutFile/output.txt)

#### 🖥 Run Code(Ctrl+Alt+N) Only On MacOS/Linux

- Write input value into [input.txt](InOutPutFile/input.txt).
- Press `Run Code or type (Ctrl+Alt+N)`
- Output written into [output.txt](InOutPutFile/output.txt)
- `Note:` On Windows `Run Code(Ctrl+Alt+N)` is not working currently.

#### 🚮 Build Clean

- **VSCode Run Task**
  - Press `Cmd/Ctrl+Shift+P` to open the command Palette.
  - Type `Tasks: Run Task` and press Enter
  - Type `C/C++: Clean Build` and press Enter.
