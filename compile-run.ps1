# compile-run.ps1

# Clean up: Remove all .exe files in the current directory
Get-ChildItem -Path .\ -Filter *.exe | Remove-Item -Force

# Compile the given C++ file
$compilerPath = "C:\msys64\mingw64\bin\g++.exe"

# Derive the output filename from the input
$outputFilename = [System.IO.Path]::ChangeExtension($args[0], "exe")

$compileArgs = "-fdiagnostics-color=always", "-g", $args[0], "-o", $outputFilename

& $compilerPath $compileArgs

# If compilation succeeded ($? returns True if last operation was successful), run the executable
if ($?) {
    & $outputFilename
}
