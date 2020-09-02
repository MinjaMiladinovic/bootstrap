const allPaths = {
  home: {
    enterprise: () => '/',
    cloud: () => '/'
  },
  image: {
    enterprise: (file) => `/imgs/${file}`,
    cloud: (file) => `/images/${file}`
  },
  mainAnalysis: {
    enterprise: (projectId, analysisId) => `/${projectId}/analyses/${analysisId}`,
    cloud: (projectId, analysisId) => `/projects/${projectId}`
  },
  configuration: {
    enterprise: (projectId) => `/projects/${projectId}/configuration`,
    cloud: (projectId) => `/projects/${projectId}/config`
  },
  configureArchComponents: {
    enterprise: (projectId) => `/projects/${projectId}/configuration#architecture`,
    cloud: (projectId) => `/projects/${projectId}/config/architectural`
  },
  retrospective: {
    enterprise: (projectId) => `/projects/${projectId}`,
    cloud: (projectId) => `/projects/${projectId}/retrospective/jobs`
  },
  forceAnalysis: {
    enterprise: (projectId) => `/projects/${projectId}/forcerun-json`,
    cloud: (projectId) => `/projects/${projectId}/jobs` // form action
  },
  forceAnalysisStop: {
    enterprise: (projectId) => `/projects/${projectId}/forcestop-json`,
    cloud: (projectId) => `/projects/${projectId}/jobs/stop` // form action: POST
  },
  systemMastery: {
    enterprise: (projectId, analysisId) => `/${projectId}/analyses/${analysisId}/social/individuals/system-map?aspect=loss`,
    cloud: (projectId, analysisId) => `/projects/${projectId}/jobs/${analysisId}/results/social/knowledge/individuals#loss`
  },
  knowledgeRisks: {
    enterprise: (projectId, analysisId) => `/${projectId}/analyses/${analysisId}/social/individuals/system-map?aspect=keypersonnel`,
    cloud: (projectId, analysisId) => `/projects/${projectId}/jobs/${analysisId}/results/social/knowledge/individuals#keypersonnel` // TODO: untested
  },
  offboardingSimulator: {
    enterprise: (projectId, analysisId) => `/${projectId}/analyses/${analysisId}/simulations/off-boarding`,
    cloud: (projectId, analysisId) => null // not implemented in Cloud yet
  },
  hotspotMap: {
    enterprise: (projectId, analysisId) => `/${projectId}/analyses/${analysisId}/code/hotspots`,
    cloud: (projectId, analysisId) => `/projects/${projectId}/jobs/${analysisId}/results/code/hotspots/system-map`
  },
  fileHotspots: {
    enterprise: (projectId, analysisId) => `/${projectId}/analyses/${analysisId}/code/biomarkers`,
    cloud: (projectId, analysisId) => `/projects/${projectId}/jobs/${analysisId}/results/code/biomarkers`
  },
  activeBranches: {
    enterprise: (projectId, analysisId) => `/${projectId}/analyses/${analysisId}/project-management/process/branch-statistics`,
    cloud: (projectId, jobId) => `/projects/${projectId}/jobs/${jobId}/results/project-management/branches`
  },
  missedGoals: {
    enterprise:(projectId, analysisId) => `/${projectId}/analyses/${analysisId}/notes/augmented-analysis`,
    cloud: () => null // not implemented in Cloud yet
  },
  systemHealth: {
    enterprise: (projectId, analysisId) => `/${projectId}/analyses/${analysisId}/architecture/system-health`,
    cloud: (projectId, analysisId) => `/projects/${projectId}/jobs/${analysisId}/results/architecture/system-health`
  },
  authors: {
    enterprise: (projectId, analysisId) => `/${projectId}/analyses/${analysisId}/social/authors/details`,
    cloud: (projectId, analysisId) => `/projects/${projectId}/jobs/${analysisId}/results/social/authors`
  },
  reports: {
    enterprise: (projectId) => `/projects/${projectId}/reports/new`,
    cloud: () => null // not implemented in Cloud yet
  },
  deliveryRisk: {
    enterprise: (projectId, analysisId) => `/${projectId}/analyses/${analysisId}/architecture/system-health`,
    cloud: (projectId, jobId)  => `/projects/${projectId}/jobs/${jobId}/results/architecture/system-health`  // should be verified
  },
  developmentCosts: {
    enterprise: (projectId, analysisId) => `/${projectId}/analyses/${analysisId}/project-management/hotspots/system-level`,
    cloud: (projectId, jobId) => null
  },
  deliveryEffectiveness: {
    enterprise: (projectId, analysisId) => `/${projectId}/analyses/${analysisId}/social/brooks-law`,
    cloud: (projectId, jobId) => `/projects/${projectId}/jobs/${jobId}/results/social/brooks-law`
  },
  analysisErrors: {
    enterprise: (projectId, analysisId) => `/projects/${projectId}/esrrors/analysis-errors/${analysisId}`,
    cloud: () => null  // not implemented in Cloud yet
  },
  notificationInspect: {
    enterprise: (projectId, analysisId, urlExtension) => `/${projectId}/analyses/${analysisId}/warnings/${urlExtension}`,
    cloud: () => null  // not implemented in Cloud yet
  },
  analysisStatusWithLessDetails: {
    enterprise: () => '/projects/all/run-status',
    cloud: () => '/projects/run-status'
  },
  analysisStatus: {
    enterprise: () => '/projects/all/status',
    cloud: () => null
  },
  newProject: {
    enterprise: () => '/projects/new',
    cloud: () =>  '/projects/select-repos'
  },
  allProjects: {
    enterprise: () => '/projects/all/project-list',
    cloud: () =>  null
  },
  batchProjects: {
    enterprise: () => '/projects/all/project-data',
    cloud: () =>  null
  },
  updateDevelopers: {
    enterprise: (projectId) => `/projects/${projectId}/developers`,
    cloud: () => null  // not implemented in Cloud yet
  },
  deleteDeveloper: {
    enterprise: (projectId) => `/projects/${projectId}/developers/delete`,
    cloud: () => null  // not implemented in Cloud yet
  },
  complexityTrends: {
    enterprise: (projectId, analysisId, filename, name) => `/${projectId}/analyses/${analysisId}/code/hotspots/xray/trend?filename=${filename}&name=${name}`,
    cloud: (projectId, analysisId, filename, name) => `/projects/${projectId}/jobs/${analysisId}/results/files/functions/complexity-trend?file-name=${filename}&function-name=${name}`
  },
  notificationWarnings: {
    enterprise: (projectId, analysisId, linkableName) => `/${projectId}/analyses/${analysisId}/warnings/${linkableName}`,
    cloud: (projectId, jobId, linkableName) => `/projects/${projectId}/jobs/${jobId}/results/warnings/${linkableName}`
  },
  pmIntegrations: {
    enterprise: (projectId) => `/projects/${projectId}/pm-integration`,
    cloud: (projectId) => `/projects/${projectId}/config/pm-data`
  },
  analyseError: {
    enterprise: (projectId) => `/projects/${projectId}/errors/analysis-errors`,
    cloud: (projectId) => `/projects/${projectId}/errors/analysis-errors`
  },
  analyseWarning: {
    enterprise: (projectId, analysisId) => `/${projectId}/analyses/${analysisId}`,
    cloud: (projectId, analysisId) => `/projects/${projectId}`
  },

  // system health
  fileLevelHotspotsUrl: {
    enterprise: (projectId, analysisId, name) => `/${projectId}/analyses/${analysisId}/architecture/biomarkers?component=${encodeURIComponent(name)}`,
    cloud: (projectId, jobId, name) => `/projects/${projectId}/jobs/${jobId}/results/architecture/biomarkers/by-component?component=${name}`,
  },
  complexityTrendUrl:  {
    enterprise: (projectId, analysisId, name) => `/${projectId}/analyses/${analysisId}/architecture/complexity-trend?name=${encodeURIComponent(name)}`,
    cloud: (projectId, analysisId, name) => null
  },
  costTrendUrl: {
    enterprise: (projectId, analysisId, name) => `/${projectId}/analyses/${analysisId}/architecture/system-health/costs/by-component/trend?name=${encodeURIComponent(name)}`,
    cloud: (projectId, jobId, name) => `/projects/${projectId}/jobs/${jobId}/results/project-management/hotspots/by-component/trend?name=${name}`,
  },

  codeReviewUrl: {
    enterprise: (projectId, analysisId, name) =>
      `/${projectId}/analyses/${analysisId}/code/hotspots/biomarkers?name=${encodeURIComponent(name)}`,
    cloud: (projectId, jobId, name) => `/projects/${projectId}/jobs/${jobId}/results/code/hotspots/biomarkers?name=${encodeURIComponent(name)}`
  },

  // X-Ray paths
  // Note that the filename parameter is written `file-name` in Cloud and `filename` in On-prem.
  xRayUrl: { // main html view
    enterprise: (projectId, analysisId, name) => `/${projectId}/analyses/${analysisId}/code/hotspots/xray?filename=${encodeURIComponent(name)}`,
    cloud: (projectId, jobId, name) => `/projects/${projectId}/jobs/${jobId}/results/files/hotspots?file-name=${encodeURIComponent(name)}`
  },
  xRayTemporalAsync: { // triggers temporal xray
    enterprise: (projectId, analysisId, fileName) => `/${projectId}/analyses/${analysisId}/temporal/xray/async?filename=${encodeURIComponent(fileName)}`,
    cloud: (projectId, jobId, fileName) => `/projects/${projectId}/jobs/${jobId}/results/code/temporal-coupling/by-commits/xray/async?file-name=${encodeURIComponent(fileName)}`
  },
  xRayHotspotAsync: {
    enterprise: (projectId, analysisId, fileName) => `/${projectId}/analyses/${analysisId}/code/hotspots/xray/async?filename=${encodeURIComponent(fileName)}`,
    cloud: (projectId, jobId, fileName) => `/projects/${projectId}/jobs/${jobId}/results/xray/async?file-name=${encodeURIComponent(fileName)}`
  },
  xRayTemporalStats: {
    enterprise: (projectId, analysisId, fileName) => `/${projectId}/analyses/${analysisId}/temporal/xray/stats?filename=${encodeURIComponent(fileName)}`,
    cloud: (projectId, jobId, fileName) =>  `/projects/${projectId}/jobs/${jobId}/results/code/temporal-coupling/by-commits/xray-result/graphdata.json?file-name=${encodeURIComponent(fileName)}`
  },
  xRayTemporalExternalTemporalCouplingDetails: { 
    enterprise: (projectId, analysisId, fileName) => `/${projectId}/analyses/${analysisId}/temporal/xray/stats/details?filename=${encodeURIComponent(fileName)}`,
    cloud: (projectId, jobId, fileName) =>  `/projects/${projectId}/jobs/${jobId}/results/code/temporal-coupling/by-commits/xray-result/details?file-name=${encodeURIComponent(fileName)}`
  },
  xRayTemporalInternalCouplingDetails: {
    enterprise: (projectId, analysisId, fileName) => `/${projectId}/analyses/${analysisId}/code/hotspots/xray/temporalcsv?name=${encodeURIComponent(fileName)}`,
    cloud: (projectId, jobId, fileName) => `/projects/${projectId}/jobs/${jobId}/results/files/hotspots/temporalcsv?file-name=${encodeURIComponent(fileName)}`
  },
  xRayProximity: {
    enterprise: (projectId, analysisId, fileName) =>  `/${projectId}/analyses/${analysisId}/code/hotspots/xray/proximity?name=${encodeURIComponent(fileName)}`,
    cloud: (projectId, jobId, fileName) => `/projects/${projectId}/jobs/${jobId}/results/files/hotspots/proximity?file-name=${encodeURIComponent(fileName)}`
  },
  // 
  xrayFunctionContents: {
    enterprise: (projectId, analysisId, fileName, functionName) => `/${projectId}/analyses/${analysisId}/code/hotspots/xray/code?filename=${fileName}&name=${functionName}`,
    cloud: (projectId, jobId, fileName, functionName) => `/projects/${projectId}/jobs/${jobId}/results/files/functions/function.json?file-name=${encodeURIComponent(fileName)}&function-name=${encodeURIComponent(functionName)}`
  },
  xrayFunctionComplexityTrend: {
    enterpise: (projectId, analysisId, fileName, functionName) => `/${projectId}/analyses/${analysisId}/code/hotspots/xray/trend?filename=${encodeURIComponent(fileName)}&name=${encodeURIComponent(functionName)}`,
    cloud: (projectId, jobId, fileName, functionName) => `/projects/${projectId}/jobs/${jobId}/results/files/functions/complexity-trend?file-name=${encodeURIComponent(fileName)}&function-name=${encodeURIComponent(functionName)}`
  }
};

const wrapWithViewContext = (viewContext, fn) => {
  return (...args) =>  viewContext + fn(...args);
};


// also checks for null arguments
const wrapWithArityValidation = (pathType, fn) => {
  let requiredArity = fn.length;
  return (...args) => {
    if (args.length < requiredArity) {
      const mismatch = requiredArity - args.length;
      console.error('Paths: Missing '  + mismatch + ' argument(s) for ' + pathType + ' link function. (Expected ' + requiredArity + '.)');
    }
    else if (args.length > requiredArity) {
      const mismatch = args.length - requiredArity;
      console.error('Paths: Too many arguments (' + args.length + ') supplied to ' + pathType + ' link function. (Expected ' + requiredArity + '.)');
    }
    else if (! args.every(s => s)) {
      console.error('Paths: null argument provided to ' + pathType);
    }
    return fn(...args);
  };
}

const assertValidProductAndContext = (product, viewContext) => {
  if (!product) {
    throw new Error('Paths: product field is not defined, cannot build links.');
  }
  if (! (product === 'enterprise' || product === 'cloud')) {
    throw new Error('Paths: product field invalid - must be cloud or enterprise.');
  }
  if ((product === 'enterprise') && typeof viewContext !== 'string')  {
    throw new Error('Paths: in on-prem, the viewContext field must be defined or be an empty string.');
  }
}

/**
 * Returns a product-specific version of each link function,
 * prepending the `viewContext`, and applying checks.
 *
 * Also includes a `product` field so that the product can be derived
 * from the link list.
 */
export const byProduct = (product, viewContext) => {
  assertValidProductAndContext(product, viewContext);

  const productPaths = {product};
  for (const pathType in allPaths) {
    const fn = wrapWithArityValidation(pathType, allPaths[pathType][product]);
    if (product === 'enterprise') {
      productPaths[pathType] = wrapWithViewContext(
        viewContext ? viewContext : '',
        fn
      );
    }
    else {
      productPaths[pathType] = fn;
    }
  }
  return productPaths;
};
