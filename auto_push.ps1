$repo = "E:\MCA 3rd SEMESTER\Algorithms-Design-and-Analysis"

Set-Location $repo

Write-Host "AUTO GIT PUSH STARTED!" -ForegroundColor Green

while ($true) {

    $status = git status --porcelain

    if ($LASTEXITCODE -ne 0) {
        Write-Host "Git error detected!" -ForegroundColor Red
        Start-Sleep -Seconds 5
        continue
    }

    if ($status) {

        Write-Host "Changes detected..." -ForegroundColor Yellow

        git add -A

        $message = "Auto Update $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')"

        git commit -m $message

        if ($LASTEXITCODE -eq 0) {

            git push

            if ($LASTEXITCODE -eq 0) {
                Write-Host "GitHub Updated Successfully!" -ForegroundColor Green
            }
            else {
                Write-Host "Push Failed!" -ForegroundColor Red
            }
        }
    }

    Start-Sleep -Seconds 5
}
#powershell -ExecutionPolicy Bypass -File .\auto_push.ps1
