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

// ================================================

// Pull (Kéo) code từ remote repo về máy
// git pull <Tên remote repo> <Tên nhánh>

// Trên Windows, khi cài đặt git Installer (trình cài đặt) sẽ hỏi về cơ chế pull mặc định
// Có 2 cơ chế pull chính 
// - Fast forward (Merge) -> Cơ chế này sẽ GỘP THẲNG nhánh mới vào nhánh hiện tại
// - Rebase -> Cơ chế này sẽ gộp code ở hai nhánh, sau đó TẠO MỘT COMMIT MỚI. 

// git pull = git fetch + git merge (nếu cài đặt cơ chế pull mặc định là Fast-forward)
// - git fetch: Tải thông tin về
// - git merge: Gộp code từ remote repo vào code local repo

// git pull --rebase = git fetch + git rebase

#include <stdio.h>

int main () {
    printf("Hello world !!");
    printf("Liu liu");
    printf("Hello mình là Lé Ô");
    printf("Minh la Bunnie. Rat vui duoc lam quen a.");
}