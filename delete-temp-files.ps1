param (
    [string]$Path = "."
)

# Guardrail: Prevent deleting files in critical directories
if ($Path -eq "C:\" -or $Path -eq "/") {
    Write-Error "Error: Attempting to clean the root directory is not allowed!"
    exit 1
}

# Confirmation prompt for safety
$Confirm = Read-Host "Are you sure you want to delete .exe, .ilk, .obj, and .pdb files in '$Path'? (y/n)"
if ($Confirm -ne "y") {
    Write-Output "Aborted."
    exit 0
}

# Delete files with specified extensions
Get-ChildItem -Path $Path -Include *.exe, *.ilk, *.obj, *.pdb -Recurse | Remove-Item -Force

Write-Output "Cleanup complete: Deleted all .exe, .ilk, .obj, and .pdb files in $Path"
