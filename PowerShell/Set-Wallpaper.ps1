function script:Set-Wallpaper
{
    param([string]$new_image_pathname)
    #Path passed and actually exists?
    if ($new_image_pathname -and (Test-Path -path $new_image_pathname))
    {
        try
        {
            Set-ItemProperty -Path "HKCU:Control Panel\Desktop" -name WallPaper -value $new_image_pathname
            Sleep -Seconds 5
            RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters, 1, True
            Write-Host "Desktop Wallpaper Changed to $new_image_pathname."
        }
        catch
        {
            Write-Host "Sorry, something went wrong!'nAborting"
        }
    }
    else
    {
        Write-Host "File '$new_image_pathname' not found.'nAborting"
    }
}


function script:eval
{
    param([string]$command)
    Invoke-Expression $command
    Invoke-Expression "($command).GetType().name"
}