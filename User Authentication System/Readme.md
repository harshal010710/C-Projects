### Project Title
Mini User Authentication System

### Description
This project implements a simple user authentication system using C++ and file handling. Users can sign up, log in, and reset their passwords.

### Features
- Sign up: Users can create a new account by providing a username, email address, and password.
- Login: Existing users can log in with their username and password.
- Forgot Password: Users who forget their passwords can reset them by providing their username and email address.

### Files
1. `Form.cpp`: Defines the Form class and its member functions.
2. `loginData.txt`: Stores user credentials (username, email, password).

### Usage
1. **Compilation**: Compile the program using a C++ compiler (e.g., g++).
   ```bash
   g++ Form.cpp Form.cpp -o auth_system
   ```

2. **Execution**: Run the compiled executable.
   ```bash
   ./auth_system
   ```

3. **Menu Options**:
   - 1: Sign-up
   - 2: Login
   - 3: Forgot Password
   - 4: Exit

### Sign-up Process
- Choose option 1 from the menu.
- Enter your desired username, email address, and password when prompted.
- Your account will be created, and the details will be stored in `loginData.txt`.

### Login Process
- Choose option 2 from the menu.
- Enter your username and password when prompted.
- If the credentials are correct, you will be logged in successfully.

### Forgot Password Process
- Choose option 3 from the menu.
- Enter your username and email address when prompted.
- Follow the instructions to reset your password.

### Example Data (for testing)
- User 1:
  - Username: harshal03
  - Email: hp@gmail.com
  - Password: 890
- User 2:
  - Username: neha10
  - Email: nd@gmail.com
  - Password: 123

### Notes
- Ensure that `loginData.txt` is in the same directory as the executable for proper functioning.
- This is a simple authentication system and may not be suitable for production use. Additional security measures should be implemented for real-world applications.

### Author
Harshal Devidas Patil

### Date
02/05/2024
