# xfce customization for kali linux
#
#  
# Youtube video : https://www.youtube.com/watch?v=TAWwJoYWq6s


# initial setup
# dconf and gsettings

# downloading files

cd ~/
mkdir xfce_themes
cd xfce_themes

# git download
# firefox-sweet-theme
git clone https://github.com/EliverLara/firefox-sweet-theme.git

# lightdm-webkit2-theme-glorious
https://github.com/manilarome/lightdm-webkit2-theme-glorious.git

# ulauncher-palenight-theme
https://github.com/fsrocha-dev/ulauncher-palenight-theme.git

# wget download
# Dracula Theme
wget https://dl1.pling.com/api/files/download/j/eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpZCI6MTY0MDIwNzQ3MSwidSI6bnVsbCwibHQiOiJkb3dubG9hZCIsInMiOiIzYmQxZjdjMWVkODYwZmE2NjM2ZDI2Mzg4NzA3MzU1ZWMyNWQwNGI4ODFmZDU1YTM1MWVkNGIxOWU5MzJkOTIzMjM0MGY3ZjRiNDI3ODZmZjE1MDM2NDljMDdkZjY2NzM4NmMwMGYzOTg1MGRjYTQ0YWU3YTZkYzEwM2M5MmRkNyIsInQiOjE2NDI2NzU3NDQsInN0ZnAiOm51bGwsInN0aXAiOm51bGx9.s87VWmh3peCABmG7dl8SsiHHPPF9zp9HqJJcYhM2B1M/Dracula.tar.xz

# sweet folder icons
wget https://dl1.pling.com/api/files/download/j/eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpZCI6MTU4Mjg0MDg0NiwidSI6bnVsbCwibHQiOiJkb3dubG9hZCIsInMiOiJhNzAxOTM0MmUwOTQ3NmE3OTZmODQ1ZjBiMmJkMTM0MzhhN2Q1NGVjYjFmM2I1MDhlODExY2ExMWVmMmRmMWE0YjU1YTc0MmI2NjZhZGNhMDgxNGQ4ODE4N2FmNzZhODFkN2EzZTIwMGEwYTBjZTdiY2QxM2YzYzY3MmIwYjQ4NCIsInQiOjE2NDI2Nzg2NzUsInN0ZnAiOiJjNDFhMjRjYzg0ZDU4ZjUyMDRjN2NkMTUyMjhjNzg4ZiIsInN0aXAiOiIxMDMuODYuMTExLjc3In0.F-Z73T6X74MQ3rmvNGhSSfLUrApLafHYCebmffnRRmA/Sweet-Rainbow.tar.xz

# candy icons
wget https://dl2.pling.com/api/files/download/j/eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpZCI6MTY0MDYzODE5MCwidSI6bnVsbCwibHQiOiJkb3dubG9hZCIsInMiOiJkYTQ4YWExOWQ5ZjkxMWQwMDI0OTBjMGIzOWQzOTU4ZDhjZDhjZmFlZWE3ZTVlZWZjNWI0YjEzM2MyNzk1ZTVjOWQyOTFhMWFkNmFhMTViOWM0ODYxNzdiZWNjMzE1Njg0YWQxYjI0OGJhNjA4MzUwNWY5ZTczZGExZGU5OGNjNiIsInQiOjE2NDI2Nzg3OTIsInN0ZnAiOiJjNDFhMjRjYzg0ZDU4ZjUyMDRjN2NkMTUyMjhjNzg4ZiIsInN0aXAiOiIxMDMuODYuMTExLjc3In0.MwtscAf5IcK1sTHCnkRs1bETynGmxPnnx9SiPCcNc-k/candy-icons.tar.xz

# tela purple icon
wget https://dl2.pling.com/api/files/download/j/eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpZCI6MTY0MDQ0MTA4MCwidSI6bnVsbCwibHQiOiJkb3dubG9hZCIsInMiOiI0YzIxYzFiZjBhNTljZTk3ODBiYzk1YjA2MGQ3MzY1MDM1N2FlZjExZTc3MGYzN2U5YmY2MjNhMzk3NGRhYTI0OGIyODFiZDE2ZmIwZGU3OGEyNmFhYzljZTFjMzIxZjg2NTA2ZWZjMDNmMWRkZGY2MmJmYmU1MTY4ODM5YjFjNyIsInQiOjE2NDI2Nzg4NDksInN0ZnAiOiJjNDFhMjRjYzg0ZDU4ZjUyMDRjN2NkMTUyMjhjNzg4ZiIsInN0aXAiOiIxMDMuODYuMTExLjc3In0.ZYkJm-6Qo3JPRDtQerVfcQtBwKvpzd09lqebVknWlEI/Tela-purple.tar.xz

# sweet cursors
wget https://dl2.pling.com/api/files/download/j/eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpZCI6MTU5MTk5Mzg1NSwidSI6bnVsbCwibHQiOiJkb3dubG9hZCIsInMiOiI3MjhmOTU4OGZjY2E2ZjA5MDlmZjU3MjkzYzRjY2Q2NjA3MzRkM2Y1Zjc3M2EwMWM2YTg0YmUyOTVkNDBlNGE3OWMyZWJkOTEyYjJjOWRlYzhjYmNlZmRlNTEzYjk3OTk3OTVjNmJiODE1NGUwZmYzNmI3YWQ5ZDhlODhhOWJmMCIsInQiOjE2NDI2NzkwMDksInN0ZnAiOiJjNDFhMjRjYzg0ZDU4ZjUyMDRjN2NkMTUyMjhjNzg4ZiIsInN0aXAiOiIxMDMuODYuMTExLjc3In0.9baVsQ2lJEYdCrFVIMfsj7yhdUsSzDHOs2E7fWy16QY/Sweet-cursors.tar.xz

# plank theme
wget https://dl1.pling.com/api/files/download/j/eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpZCI6MTYwNDM0NzQ3OCwidSI6bnVsbCwibHQiOiJkb3dubG9hZCIsInMiOiJjY2YyMTc0Nzg3NTdiYTFkMWYxZGZmNDBjODBhOGU2ZjY2ZDBkNWQ1YWM5MTRhMjk1YjQyMDNmYjIwODk1OGEwOGYzNDI2NGRlNDY5NzFkZGQ3YTAxYWY2NTJjYjY1NDRiNjYwN2QyNmJmOWZlZGJlMTUxMTlmZGE1YzIxZWQyOSIsInQiOjE2NDI2NzkxMDksInN0ZnAiOiJjNDFhMjRjYzg0ZDU4ZjUyMDRjN2NkMTUyMjhjNzg4ZiIsInN0aXAiOiIxMDMuODYuMTExLjc3In0.iB8nWcbc5h2Dv7C346HrPeBLoD9t5LreOE_cYukC1mM/TCE%20inBlack%20Trend%20-%20Uppercap.tar.xz