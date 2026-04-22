// KHỞI TẠO MỘT REPO MỚI TỪ MÁY

// git init -> Khởi tạo git repository ở máy tính

// git remote add <tên remote> <URL của remote repository> -> Thêm địa chỉ của kho code trên github

// Khai báo danh tính
//   git config --global user.email "you@example.com"
//   git config --global user.name "Your Name"

// git status -> Kiểm tra trạng thái local repo

// git add . -> Thêm tất cả các file TRONG FOLDER HIỆN TẠI VÀO STAGING AREA 

// git commit -m "<Mô tả những gì mình làm>" -> "Đẩy" các file từ STAGING AREA vào LOCAL REPO

// Push (đẩy) code từ Staging Area lên Remote Repo
// git push <Tên remote repo> <Tên nhánh>

// =============================================

// CLONE MỘT REPO ĐÃ CÓ SẴN

// Clone (Sao chép) một remote repo có sẵn về máy
// Lấy <URL của remote repository> của remote repo (thường là HTTPS)
// git clone <URL của remote repository>

// Pull (Kéo) code từ remote repo về máy
// git pull <Tên remote repo> <Tên nhánh>

#include <stdio.h>

int main () {
    printf("Hello world !!");
    printf("Liu liu");
    printf("Minh la Bunnie. Rat vui duoc lam quen a.");
}