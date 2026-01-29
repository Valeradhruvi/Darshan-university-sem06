document.addEventListener('DOMContentLoaded', function () {
    const loginForm = document.getElementById('loginForm');
    const emailInput = document.getElementById('email');
    const passwordInput = document.getElementById('password');
    const alertBox = document.getElementById('loginAlert');

    loginForm.addEventListener('submit', function (e) {
        e.preventDefault();

        const email = emailInput.value;
        const password = passwordInput.value;

        // Hardcoded credentials for demonstration
        const validEmail = 'admin';
        const validPassword = 'password123';

        if (email === validEmail && password === validPassword) {
            showAlert('Login Successful! Redirecting...', 'success');
            // Simulate redirection or further action
            setTimeout(() => {
                // console.log('Redirecting...');
            }, 2000);
        } else {
            showAlert('Invalid username or password. Please try again.', 'danger');
        }
    });

    function showAlert(message, type) {
        alertBox.textContent = message;
        alertBox.className = `alert alert-${type} text-center fade show`;
        alertBox.classList.remove('d-none');
    }
});
