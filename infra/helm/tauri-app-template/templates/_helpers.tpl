{{- define "tauri-app-template.name" -}}
{{- .Chart.Name -}}
{{- end -}}

{{- define "tauri-app-template.labels" -}}
app: {{ include "tauri-app-template.name" . }}
{{- end -}}
