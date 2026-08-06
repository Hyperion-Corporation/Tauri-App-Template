# helm/

Helm chart packaging (mostly) of the same resources as `infra/k8s/base/`, for
teams that prefer `helm install` over `kubectl apply -k`. Pick one, don't run
both against the same cluster/namespace.

```bash
helm lint infra/helm/tauri-app-template
helm install tauri-app-template infra/helm/tauri-app-template -f infra/helm/tauri-app-template/values.yaml
```
